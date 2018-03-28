/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:55:23 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/21 23:56:17 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	init_buffers(char **b)
{
	int		i;

	i = -1;
	while (++i < FD_LIMIT)
		b[i] = NULL;
}

static int	read_file(const int fd, char **buffers)
{
	char	buff[BUFF_SIZE + 1];
	char	*tmp;
	int		cursor;
	int		buff_len;

	if ((cursor = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[cursor] = '\0';
		buff_len = buffers[fd] ? ft_strlen(buffers[fd]) : 0;
		tmp = ft_strnew(buff_len + cursor);
		buffers[fd] ? ft_strcat(tmp, buffers[fd]) : (void)0;
		ft_strcat(tmp, buff);
		tmp[buff_len + cursor] = '\0';
		free(buffers[fd]);
		buffers[fd] = tmp;
	}
	return (cursor);
}

static int	read_line(const int fd, char **buffers)
{
	int		nl;
	int		cursor;

	cursor = read_file(fd, buffers);
	if (!buffers[fd] && cursor <= 0)
		return (-2);
	while ((nl = ft_strchri(buffers[fd], '\n')) < 0)
	{
		cursor = read_file(fd, buffers);
		if (cursor <= 0)
			return (nl);
	}
	return (nl);
}

char		*strncutout(char *src, char **dst, int size)
{
	char	*tmp;
	int		src_len;

	src_len = ft_strlen(src);
	ft_strncpy(*dst, src, size);
	(*dst)[size] = '\0';
	tmp = (char *)malloc(sizeof(char) * (src_len - size + 1));
	ft_strcpy(tmp, src + size + (size == src_len ? 0 : 1));
	tmp[src_len - size] = '\0';
	free(src);
	return (tmp);
}

int			get_next_line(const int fd, char **line)
{
	static char **buffers;
	int			buff_len;
	int			read;
	int			nl;

	if (fd < 0 || !line || fd > FD_LIMIT || BUFF_SIZE < 1)
		return (EOF);
	if (!buffers)
	{
		buffers = (char **)malloc(sizeof(char *) * FD_LIMIT);
		init_buffers(buffers);
	}
	nl = read_line(fd, buffers);
	if (nl == -2)
		return (EOF);
	buff_len = buffers[fd] ? ft_strlen(buffers[fd]) : 0;
	nl < 0 ? (nl = buff_len) : (void)0;
	read = 0;
	if (nl >= 0 && buff_len > 0)
	{
		*line = (char *)malloc(sizeof(char) * (nl + 1));
		buffers[fd] = strncutout(buffers[fd], line, nl);
		read = 1;
	}
	return (read);
}
