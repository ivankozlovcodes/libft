/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:04:31 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 20:56:05 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			printf_fd = STDOUT_FILENO;

size_t	ft_vprintf(int fd, va_list *args, const char *fmt)
{
	char	*ptr;
	char	*start;
	size_t	len;

	printf_fd = fd;
	ptr = (char *)fmt;
	start = ptr;
	len = 0;
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ft_putnstr_fd(start, ptr - start, printf_fd);
			len += process_arg(args, &ptr);
			start = ptr;
	}
		else
		{
			len++;
			ptr++;
		}
		if (errno == EILSEQ)
			return (-1);
	}
	ft_putnstr_fd(start, ptr - start, printf_fd);
	return (len);
}

size_t	ft_printf(const char *fmt, ...)
{
	va_list	args;
	int		len;

	len = 0;
	errno = 0;
	if (fmt)
	{
		va_start(args, fmt);
		len = ft_vprintf(STDOUT_FILENO, &args, fmt);
		va_end(args);
	}
	return (len);
}
