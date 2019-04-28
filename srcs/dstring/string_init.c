/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:33:51 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/16 23:39:04 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "dstring.h"

t_string	*string_init(size_t capacity)
{
	t_string	*s;

	if (capacity <= 0)
		capacity = DEFAULT_CAPACITY;
	s = malloc(sizeof(t_string));
	s->capacity = capacity;
	s->content = malloc(sizeof(char) * s->capacity);
	s->length = 0;
	return (s);
}
