/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlstnew.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 02:06:42 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 02:11:19 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"
#include "memory.h"

t_dlist			*dlstnew(void const *content, size_t size)
{
	t_dlist		*ret;

	ret = ft_memalloc(sizeof(t_dlist));
	if (ret)
	{
		if (!content)
		{
			ret->content = NULL;
			ret->content_size = 0;
		}
		else
		{
			ret->content = ft_memalloc(size);
			if (!ret->content)
				return (NULL);
			ft_memcpy(ret->content, content, size);
			ret->content_size = size;
		}
	}
	return (ret);
}
