/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 13:04:03 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/28 12:51:26 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "memory.h"

void	*ft_memdup(const void *src, size_t n)
{
	void		*ret;

	ret = ft_memalloc(n);
	return (ft_memcpy(ret, src, n));
}
