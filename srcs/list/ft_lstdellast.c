/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdellast.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:03:39 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/28 16:12:10 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstdellast(t_list *list, void (*del)(void *, size_t))
{
	t_list	*last;

	last = ft_lstlast(list);
	ft_lstdelone(&last, del);
}
