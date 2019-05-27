/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:12:41 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/26 16:16:14 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static size_t	g_count;
static t_list	*g_stack;

/*
** Operation:	Initializes stack.
*/

void			stack_init(void)
{
	g_count = 0;
	g_stack = NULL;
}

/*
** Argument:	1. Void pointer function to delete the node properly.
** Operation:	Frees and destroys stack using del function
**				or default ft_free_content if del was not provided.
*/

void			stack_destroy(void (*del)(void *, size_t))
{
	if (!del)
		del = ft_free_content;
	g_count = 0;
	ft_lstdel(&g_stack, del);
	return ;
}

/*
** Argument:	1. Void pointer respresenting data
**				2. Content size
** Operation:	Creates new node and adds it at the end of stack.
** Return:		Size of stack.
*/

size_t			stack_push(void *data, size_t size)
{
	t_list	*item;

	item = ft_lstnew(data, size);
	if (g_stack == NULL)
		g_stack = item;
	else
		ft_lstadd(&g_stack, item);
	return (++g_count);
}

/*
** Operation:	Retrieves, but does not remove, the last node of stack
** Return:		Void pointer on node's data
*/

void			*stack_peek(void)
{
	void	*data;

	data = NULL;
	if (g_stack != NULL && g_count >= 1)
		data = g_stack->content;
	return (data);
}

/*
** Operation:	Retrieves and removes the last node of stack
** Return:		Void pointer on node's data
*/

void			*stack_pop(void)
{
	void	*data;

	data = NULL;
	if (g_stack != NULL && g_count >= 1)
		data = g_stack->content;
	g_stack = ft_lstdelfirst(&g_stack, ft_save_content);
	g_count--;
	return (data);
}
