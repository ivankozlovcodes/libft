/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:44:00 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/07/15 15:28:25 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"
#include "memory.h"

t_btree_node		*new_btree_node(void *content, size_t content_size)
{
	t_btree_node		*newnode;

	newnode = ft_memalloc(sizeof(t_btree_node));
	if (content != NULL)
	{
		newnode->content = ft_memdup(content, content_size);
		newnode->size = content_size;
	}
	return (newnode);
}
