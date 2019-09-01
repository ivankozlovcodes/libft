/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:39:06 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 12:30:05 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftstring.h"
#include "memory.h"
#include "dstring.h"

bool		string_appendn(struct s_string *s, char *add, size_t n)
{
	char	*tmp;
	bool	ret;

	tmp = ft_strnew(n);
	ft_strncpy(tmp, add, n);
	ret = string_append(s, tmp);
	free(tmp);
	return (ret);
}

bool		string_append(struct s_string *s, char *add)
{
	size_t	len;
	size_t	capacity;
	bool	success;

	len = ft_strlen(add);
	capacity = s->capacity;
	success = string_realloc(s, add);
	if (success)
	{
		ft_strcpy(s->content + s->length, add);
		s->length += len;
	}
	return (success);
}
