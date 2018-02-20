/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:43:18 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 11:56:19 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	unsigned char		*tmp;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if ((tmp = (unsigned char *)malloc(sizeof(unsigned char) * len)))
	{
		i = -1;
		while (++i < len)
			tmp[i] = s[i];
		i = -1;
		while (++i < len)
			d[i] = tmp[i];
	}
	return (dst);
}
