/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdeldfunc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:40:17 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/28 20:54:36 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "memory.h"

/*
** Argument:	1. Void pointer respresenting data
**				2. Content size
** Operation:	Frees pointer and sets in to NULL.
*/

void	ft_free_content(void *data, size_t size)
{
	ft_memdel(&data);
}

/*
** Argument:	1. Void pointer respresenting data
**				2. Content size
** Operation:	Does nothing. Mock for sending to ft_lstdelone.
**				Needed when we want to save content
**				but remove node from the list.
*/

void	ft_save_content(void *data, size_t size)
{
	(void)data;
	(void)size;
}
