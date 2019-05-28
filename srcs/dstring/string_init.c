/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:33:51 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/28 12:56:48 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"

t_string	*string_init(size_t capacity)
{
	t_string	*s;

	if (capacity <= 0)
		capacity = DEFAULT_CAPACITY;
	s = ft_memalloc(sizeof(t_string));
	s->capacity = capacity;
	s->content = ft_memalloc(sizeof(char) * s->capacity);
	s->length = 0;
	return (s);
}
