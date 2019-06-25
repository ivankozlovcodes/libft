/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstdel.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:43:15 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:48:49 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"
#include "memory.h"

void		dlstdelone(t_dlist **list, void (*del)(void *, size_t))
{
	if (!list || !*list || !del)
		return ;
	del((*list)->content, (*list)->content_size);
	ft_free(1, *list);
	*list = NULL;
}

void		dlstdel(t_dlist **list, void (*del)(void *, size_t))
{
	if (list && *list && del)
	{
		dlstdel(&(*list)->next, del);
		dlstdelone(list, del);
	}
}
