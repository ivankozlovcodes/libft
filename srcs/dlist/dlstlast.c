/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstlast.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:12:50 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:13:50 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

t_dlist		*dlstlast(t_dlist *list)
{
	while (list && list->next)
		list = list->next;
	return (list);
}
