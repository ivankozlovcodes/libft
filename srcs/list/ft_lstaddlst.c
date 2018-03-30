/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:26:23 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/29 23:05:40 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

/*
** Argument:	1. Double pointer to destination list(a)
**				2. Pointer to source list(b).
** Operation:	Adds all items of list b to list a.
**				And frees the b list after.
*/

void	ft_lstaddlst(t_list **al, t_list *bl)
{
	t_list	*tmp;

	if (!al)
		return ;
	if (bl)
	{
		while (bl)
		{
			ft_lstadd(al, ft_lstnew(bl->content, bl->content_size));
			tmp = bl->next;
			ft_lstdelone(&bl, ft_free_content);
			bl = tmp;
		}
	}
}
