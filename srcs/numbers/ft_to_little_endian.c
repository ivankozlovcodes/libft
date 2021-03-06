/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_little_endian.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 10:55:12 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/04 12:19:23 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		to_little_endian(int c)
{
	return (((c >> 24) & 0xff) | ((c << 8) & 0xff0000) |
		((c >> 8) & 0xff00) | ((c << 24) & 0xff000000));
}

size_t	to_le_64(size_t be)
{
	return (be << 56 | (be << 40 & 0x00FF000000000000) | (be << 24 &
			0x0000FF0000000000) | (be << 8 & 0x000000FF00000000) |
			(be >> 8 & 0x00000000FF000000) | (be >> 24 & 0x0000000000FF0000) |
			(be >> 40 & 0x000000000000FF00) | (be >> 56 & 0x00000000000000FF));
}
