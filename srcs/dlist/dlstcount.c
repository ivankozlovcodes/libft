/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstcount.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:31:09 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:37:13 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

size_t		dlstcount(t_dlist *list)
{
	size_t	count;

	count = 0;
	while (list)
	{
		count++;
		list = list->next;
	}
	return (count);
}
