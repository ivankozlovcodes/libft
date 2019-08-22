/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batman <ikozlov@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:44:10 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/08/22 12:17:32 by batman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

# include <stddef.h>

struct						s_btree_node
{
	void					*content;
	size_t					size;
	struct s_btree_node		*left;
	struct s_btree_node		*right;
};
typedef struct s_btree_node	t_btree_node;

/*
**	srcs/btree/new_btree_node.c
*/

t_btree_node				*new_btree_node(void *content, size_t content_size);

/*
**	srcs/btree/free_node.c
*/

void						*free_node(t_btree_node *node,
	void (*free_content)(void *, size_t));

#endif
