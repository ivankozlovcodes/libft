/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:32:10 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 12:36:34 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	ch;
	unsigned char	*p;

	i = -1;
	ch = (unsigned char)c;
	p = (unsigned char *)b;
	while (++i < len)
		p[i] = ch;
	return (b);
}
