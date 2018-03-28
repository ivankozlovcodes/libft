/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelfirst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:10:51 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/28 16:46:20 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list		*ft_lstdelfirst(t_list **list, void (*del)(void *, size_t))
{
	t_list		*tail;

	tail = (*list)->next;
	ft_lstdelone(list, del);
	return (tail);
}
