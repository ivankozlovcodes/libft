/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstforeachif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:20:27 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 15:53:17 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

static void		helper(t_dlist *list,
	void (*f)(t_dlist *elem, size_t idx, t_dlist *list),
	bool (*cond)(size_t idx, t_dlist *elem))
{
	size_t		idx;
	t_dlist		*current;

	idx = 0;
	current = list;
	while (current)
	{
		if ((cond && cond(idx, current)) || !cond)
			f(current, idx++, list);
		current = current->next;
	}
}

void			dlstforeachif(t_dlist *list,
	void (*f)(t_dlist *elem, size_t idx, t_dlist *list),
	bool (*cond)(size_t idx, t_dlist *elem))
{
	if (!list)
		return ;
	helper(list, f, cond);
}
