/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_splice.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 10:10:30 by batman            #+#    #+#             */
/*   Updated: 2019/08/31 12:13:20 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "dstring.h"

/*
**	Changes the contents of an array by removing or replacing
**	existing elements. If edition is not possible
**	it's considered as a failure.
**
**	s:				string to edit
**	start:			start index
**	delete_count:	the number of elements to remove from start
**
**	returns:		boolean representing success(true) or failure(false)
*/

bool	string_splice(t_string *s, int start, int delete_count)
{
	char	*tail;
	int		tail_len;

	if (start >= s->length || delete_count <= 0)
		return (false);
	if (start + delete_count >= s->length)
		delete_count = s->length - start;
	tail = s->content + start + delete_count;
	tail_len = s->length - start + delete_count;
	ft_bzero(s->content + start, delete_count);
	ft_memcpy(s->content + start, tail, tail_len);
	ft_bzero(s->content + start + tail_len, delete_count);
	s->length -= delete_count;
	return (true);
}
