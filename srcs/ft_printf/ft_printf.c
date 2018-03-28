/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/04 17:04:31 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:45:28 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	process(va_list *args, const char *fmt)
{
	char	*ptr;
	char	*start;
	size_t	len;

	ptr = (char *)fmt;
	start = ptr;
	len = 0;
	while (*ptr)
	{
		if (*ptr == '%')
		{
			ft_putnstr(start, ptr - start);
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
	ft_putnstr(start, ptr - start);
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
		len = process(&args, fmt);
		va_end(args);
	}
	return (len);
}
