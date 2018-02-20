/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:24:08 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 11:41:51 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	unsigned char		b;

	p = (const unsigned char *)s;
	b = (unsigned char)c;
	while (*p != b && n-- && *p)
		p++;
	return (*p == b ? (void *)p : NULL);
}