/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_realloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:18:47 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 19:31:53 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"
#include "ftstring.h"

#include <stdlib.h>

/*
**	Checks if dstring content can fit an addition.
**	Reallocates memory for dstring content if nessesary.
**	Returns true if there is enough memory. False otherwise.
**
**	NB! uses realloc
**
**	s:				dynamic string
**	add:			new string to be added
**
**	return:			success status - true or false
*/

bool		string_realloc(t_string *s, char *add)
{
	size_t		new_len;
	size_t		capacity_needed;

	new_len = s->length + ft_strlen(add);
	capacity_needed = s->capacity;
	while (new_len < capacity_needed)
		capacity_needed *= 2;
	if (capacity_needed > s->capacity)
	{
		s->content = realloc(s->content, capacity_needed);
		if (s->content == NULL)
			return (false);
		s->capacity = capacity_needed;
	}
	return (true);
}
