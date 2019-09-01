/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 12:13:14 by ikozlov           #+#    #+#             */
/*   Updated: 2019/09/01 09:34:33 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"
#include "ftstring.h"

bool			string_insert(t_string *s, char *add, int pos)
{
	size_t	add_len;
	bool	realloc_success;

	if (pos < 0)
		return (false);
	realloc_success = string_realloc(s, add);
	add_len = ft_strlen(add);
	if (realloc_success)
	{
		ft_memmove(s->content + pos + add_len,
			s->content + pos, s->length - pos + 1);
		ft_memcpy(s->content + pos, add, add_len);
		s->length += add_len;
	}
	return (realloc_success);
}
