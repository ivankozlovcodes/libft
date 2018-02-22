/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:03:49 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/21 21:48:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	unsigned char		c1;
	unsigned char		c2;

	if ((!s1 && !s2) || n == 0)
		return (0);
	p1 = (const unsigned char *)s1;
	p2 = (const unsigned char *)s2;
	c1 = *p1;
	c2 = *p2;
	while (c1 == c2 && n-- > 0)
	{
		c1 = *p1++;
		c2 = *p2++;
	}
	return (c1 - c2);
}
