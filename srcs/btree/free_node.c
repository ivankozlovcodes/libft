/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_node.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batman <ikozlov@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 12:09:37 by batman            #+#    #+#             */
/*   Updated: 2019/08/22 15:14:47 by batman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btree.h"
#include "memory.h"

/*
**	Frees content of btree node and return node's content when possible.
**	Returns NULL otherwise.
**
**	node:			node to free
**	free_content:	function to free node's content
**
**	returns: pointer to node's content or NULL
*/
void		*free_node(t_btree_node *node,
	void (*free_content)(void *, size_t))
{
	void		*content;

	content = NULL;
	if (node)
	{
		if (free_content)
			free_content(node->content, node->size);
		else
			content = node->content;
		ft_free(1, node);
	}
	return (content);
}
