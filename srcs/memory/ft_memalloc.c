/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 16:35:01 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 20:58:56 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*res;

	if ((res = malloc(size)))
		ft_bzero(res, size);
	return (res);
}
