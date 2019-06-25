/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstindexof.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 07:14:59 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 07:16:59 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

size_t		dlstindexof(t_dlist *list, t_dlist *el)
{
	size_t	idx;

	if (!list || !el)
		return (-1);
	idx = 0;
	while (list)
	{
		if (list->content == el->content)
			return (idx);
		list = list->next;
		idx++;
	}
	return (-1);
}
