/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:33:51 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 10:22:37 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"

void			string_init_content(t_string *s, size_t capacity)
{
	capacity = capacity > 0 ? capacity : DEFAULT_CAPACITY;
	s->content = ft_memalloc(sizeof(char) * capacity);
	s->length = 0;
	s->capacity = capacity;
}

t_string		*string_init(size_t capacity)
{
	t_string	*s;

	s = ft_memalloc(sizeof(t_string));
	string_init_content(s, capacity);
	return (s);
}
