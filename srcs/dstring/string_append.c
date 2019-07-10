/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:39:06 by ikozlov           #+#    #+#             */
/*   Updated: 2019/07/10 08:39:44 by ivankozlov       ###   ########.fr       */
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

	len = ft_strlen(add);
	capacity = s->capacity;
	while (capacity < len + s->length + 1)
		capacity *= 2;
	if (capacity > s->capacity)
	{
		s->capacity = capacity;
		s->content = ft_realloc(s->content, s->length, s->capacity);
		if (!s->content)
			return (false);
	}
	else
		ft_strcpy(s->content + s->length, add);
	s->length += len;
	return (false);
}
