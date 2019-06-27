/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 15:10:17 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 20:57:16 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t		ft_dprintf(int fd, const char *fmt, ...)
{
	size_t		len;
	va_list		args;

	len = 0;
	errno = 0;
	if (fmt)
	{
		va_start(args, fmt);
		len = ft_vprintf(fd, &args, fmt);
		va_end(args);
	}
	return (len);
}
