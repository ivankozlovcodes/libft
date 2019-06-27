/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:04:31 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 21:21:42 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		g_printf_fd = STDOUT_FILENO;

size_t	ft_vprintf(int fd, va_list *args, const char *fmt)
{
	char	*start;
	size_t	len;

	g_printf_fd = fd;
	fmt = (char *)fmt;
	start = fmt;
	len = 0;
	while (*fmt)
	{
		if (*fmt == '%')
		{
			ft_putnstr_fd(start, fmt - start, g_printf_fd);
			len += process_arg(args, (char **)&fmt);
			start = fmt;
		}
		else
		{
			len++;
			fmt++;
		}
		if (errno == EILSEQ)
			return (-1);
	}
	ft_putnstr_fd(start, fmt - start, g_printf_fd);
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
