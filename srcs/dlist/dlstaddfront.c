/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstaddfront.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:16:01 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:30:54 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void		dlstaddfront(t_dlist **list, t_dlist *new)
{
	if (!list)
		return ;
	new->next = *list;
	(*list)->prev = new;
	*list = new;
}
