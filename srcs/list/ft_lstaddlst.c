/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddlst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/29 20:26:23 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/29 20:57:53 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstaddlst(t_list **al, t_list *bl)
{
	if (!al)
		return ;
	while (bl)
	{
		ft_lstadd(al, ft_lstnew(bl->content, bl->content_size));
		bl = bl->next;
	}
}
