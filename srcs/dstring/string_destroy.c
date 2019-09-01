/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:51:04 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 10:59:44 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dstring.h"
#include <stdlib.h>

void	string_destroy_content(t_string *s)
{
	free(s->content);
	s->capacity = 0;
	s->length = 0;
}

char	*string_destroy(t_string *s, bool save_content)
{
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = s->content;
	if (save_content == false)
	{
		free(tmp);
		tmp = NULL;
	}
	free(s);
	return (tmp);
}
