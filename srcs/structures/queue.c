/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 14:14:06 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/08 18:04:28 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "ft_printf.h"

static t_list	*g_queue;
static size_t	g_count;

/*
** Operation:	Initializes queue.
*/

void			q_init(void)
{
	g_queue = NULL;
	g_count = 0;
}

/*
** Argument:	1. Void pointer function to delete the node properly.
** Operation:	Frees and destroys queue using del function
**				or default ft_free_content if del was not provided.
*/

void			q_destroy(void (*del)(void *, size_t))
{
	if (!del)
		del = ft_free_content;
	g_count = 0;
	ft_lstdel(&g_queue, del);
	return ;
}

/*
** Argument:	1. Void pointer respresenting data
**				2. Content size
** Operation:	Creates new node and adds it at the end of queue.
** Return:		Size of queue.
*/

size_t			q_push(void *data, size_t size)
{
	t_list	*item;

	item = ft_lstnew(data, size);
	if (g_queue == NULL)
		g_queue = item;
	else
		ft_lstaddback(&g_queue, item);
	return (++g_count);
}

/*
** Operation:	Retrieves, but does not remove, the last node of queue
** Return:		Void pointer on node's data
*/

void			*q_peek(void)
{
	void	*data;

	data = NULL;
	if (g_queue != NULL && g_count >= 1)
		data = g_queue->content;
	return (data);
}

/*
** Operation:	Retrieves and removes the last node of queue
** Return:		Void pointer on node's data
*/

void			*q_pop(void)
{
	void	*data;

	data = NULL;
	if (g_queue != NULL && g_count >= 1)
		data = g_queue->content;
	g_queue = ft_lstdelfirst(&g_queue, ft_save_content);
	g_count--;
	return (data);
}
