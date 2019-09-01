/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_clear_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/31 11:03:17 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 11:06:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"

/*
**	Clears dstring content but does not free it.
**	Also resets capacity to DEFAULT_CAPACITY.
**	In order to free dstring content use string_destroy_content.
**
**	s:			string to clear content of
**
**	returns:	void
*/

void						string_clear_content(t_string *s)
{
	ft_bzero(s->content, s->length);
	s->length = 0;
	s->capacity = DEFAULT_CAPACITY;
}
