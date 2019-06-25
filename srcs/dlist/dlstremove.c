/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstremove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 04:23:42 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 04:34:07 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void		dlstremove(t_dlist **list, t_dlist *item, void (*del)(void *, size_t))
{
	if (!list || !*list || !item)
		return ;
	if (item->prev)
		item->prev->next = item->next;
	if (item->next)
		item->next->prev = item->prev;
	if (item == *list)
		*list = item->next;
	dlstdelone(&item, del);
}
