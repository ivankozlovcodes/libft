/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsortascdesc.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 19:24:26 by ikozlov           #+#    #+#             */
/*   Updated: 2019/03/07 19:41:35 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	ft_lstswap(t_list *a, t_list *b)
{
	t_list	tmp;

	tmp.content = a->content;
	tmp.content_size = a->content_size;
	a->content = b->content;
	a->content_size = b->content_size;
	b->content = tmp.content;
	b->content_size = tmp.content_size;
}

void		ft_lstsortascdesc(t_list *list,
	int (cmp)(t_list *a, t_list *b), int asc)
{
	int		order;
	int		swapped;
	t_list	*ptr;
	t_list	*lptr;

	order = asc ? 1 : -1;
	if (!list)
		return ;
	swapped = 1;
	lptr = NULL;
	while (swapped)
	{
		swapped = 0;
		ptr = list;
		while (ptr->next != lptr)
		{
			if (cmp(ptr, ptr->next) * order > 0)
			{
				ft_lstswap(ptr, ptr->next);
				swapped = 1;
			}
			ptr = ptr->next;
		}
		lptr = ptr;
	}
}
