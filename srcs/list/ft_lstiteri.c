/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 04:21:30 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 21:22:45 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void		helper(size_t idx, t_list *lst,
	void (*f)(size_t idx, t_list *elem),
	bool (*cond)(size_t idx, t_list *elem))
{
	if (!lst)
		return ;
	if ((cond && cond(idx, lst)) || !cond)
		f(idx++, lst);
	helper(idx, lst->next, f, cond);
}

void			ft_lstiteri(t_list *lst, void (*f)(size_t idx, t_list *elem))
{
	if (!lst || !f)
		return ;
	helper(0, lst, f, NULL);
}

void			ft_lstiteriif(t_list *lst, void (*f)(size_t idx, t_list *elem),
	bool (*cond)(size_t idx, t_list *elem))
{
	if (!lst || !f)
		return ;
	helper(0, lst, f, cond);
}
