/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:26:23 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/30 11:47:39 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

/*
** Argument:	1. Double pointer to destination list(a)
**				2. Pointer to source list(b).
** Operation:	Adds all items of list b to front of list a.
*/

void	ft_lstaddlst(t_list **al, t_list *bl)
{
	t_list	*tmp;

	if (!al)
		return ;
	while (bl)
	{
		tmp = bl->next;
		ft_lstadd(al, bl);
		bl = tmp;
	}
}
