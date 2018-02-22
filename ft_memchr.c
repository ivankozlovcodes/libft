/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 11:24:08 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/22 09:20:09 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;
	char		b;

	p = s;
	b = c;
	i = -1;
	while (++i < n)
		if (p[i] == b)
			return ((void *)(p + i));
	return (NULL);
}
