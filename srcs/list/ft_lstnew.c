/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:34:27 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 20:57:53 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "memory.h"
#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if ((res = (t_list *)malloc(sizeof(t_list))))
	{
		if (!content)
		{
			res->content = NULL;
			res->content_size = 0;
		}
		else
		{
			if (!(res->content = ft_memalloc(content_size)))
				return (NULL);
			res->content = ft_memcpy(res->content, content, content_size);
			res->content_size = content ? content_size : 0;
		}
		res->next = NULL;
	}
	return (res);
}
