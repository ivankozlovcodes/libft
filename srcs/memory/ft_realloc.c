/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:40:16 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/16 23:50:42 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include <stdlib.h>

void	*ft_realloc(void *ptr, size_t size, size_t newsize)
{
	void	*newptr;

	if (!ptr)
		return (NULL);
	newptr = malloc(sizeof(newsize));
	if (!newptr)
		return (NULL);
	ft_bzero(newptr, newsize);
	ft_memcpy(newptr, ptr, size);
	return (newptr);
}
