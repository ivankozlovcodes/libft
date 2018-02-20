/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:21:10 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 12:26:23 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		ch;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	ch = (unsigned char)c;
	i = -1;
	while (++i < n)
	{
		d[i] = s[i];
		if (d[i] == ch)
			return (dst + i + 1);
	}
	return (NULL);
}
