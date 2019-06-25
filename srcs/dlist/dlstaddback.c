/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstaddback.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:12:17 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:18:04 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	dlstaddback(t_dlist **list, t_dlist *new)
{
	t_dlist		*last;

	if (!list || !*list)
		return ;
	last = dlstlast(*list);
	last->next = new;
	new->prev = last;
}
