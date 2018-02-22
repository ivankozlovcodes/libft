/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:34:27 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/21 21:06:34 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*res;

	if ((res = (t_list *)malloc(sizeof(t_list))))
	{
		if (!(res->content = ft_memalloc(content_size)))
			return (NULL);
		printf("\n%p\n%p", res, res->content);
		res->content = content ? ft_memcpy(res->content, content, content_size) : NULL;
		res->content_size = content ? content_size : 0;
		res->next = NULL;
	}
	return (res);
}
