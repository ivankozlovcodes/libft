/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 20:46:32 by ikozlov           #+#    #+#             */
/*   Updated: 2019/03/05 03:32:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (dstlen);
	i = -1;
	while (src[++i] && ((dstlen + i) < (dstsize - 1)))
		dst[dstlen + i] = src[i];
	dst[dstlen + i] = '\0';
	return ((dstsize > dstlen ? dstlen : dstsize) + srclen);
}
