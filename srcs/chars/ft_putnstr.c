/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:02:15 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 15:19:23 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_math.h"
#include "ftstring.h"

void	ft_putnstr_fd(const char *s, size_t n, int fd)
{
	size_t	len;

	len = ft_strlen(s);
	write(fd, s, MIN(len, n));
}

void	ft_putnstr(const char *s, size_t n)
{
	size_t	len;

	len = ft_strlen(s);
	write(1, s, MIN(len, n));
}
