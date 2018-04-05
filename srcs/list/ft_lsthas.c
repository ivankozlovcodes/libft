/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsthas.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 16:06:27 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/04 16:09:25 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		ft_lsthas(t_list *list, t_list *el, int (cmp)(t_list *a, t_list *b))
{
	while (list)
	{
		if (!cmp(list->content, el->content))
			return (1);
		list = list->next;
	}
	return (0);
}
