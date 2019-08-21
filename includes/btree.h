/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 14:44:10 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/07/15 15:28:29 by ivankozlov       ###   ########.fr       */
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

#endif
