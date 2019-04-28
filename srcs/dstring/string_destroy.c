/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:51:04 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/16 23:53:43 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bool.h"
#include "dstring.h"
#include <stdlib.h>

char	*string_destroy(t_string *s, t_bool save_content)
{
	char	*tmp;

	tmp = s->content;
	if (!save_content)
	{
		free(tmp);
		tmp = NULL;
	}
	free(s);
	return (tmp);
}
