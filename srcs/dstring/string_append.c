/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:39:06 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/17 00:03:04 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bool.h"
#include "strings.h"
#include "memory.h"
#include "dstring.h"

t_bool		string_append(struct s_string *s, char *add)
{
	size_t	len;
	size_t	capacity;

	len = ft_strlen(add);
	capacity = s->capacity;
	while (capacity < len + s->length + 1)
		capacity *= 2;
	if (capacity > s->capacity)
	{
		s->capacity = capacity;
		s->content = ft_realloc(s->content, s->length, s->capacity);
		if (!s->content)
			return (FALSE);
	}
	else
		ft_strcpy(s->content + s->length, add);
	s->length += len;
	return (TRUE);
}
