/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_destroy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:51:04 by ikozlov           #+#    #+#             */
/*   Updated: 2019/07/10 08:37:50 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dstring.h"
#include <stdlib.h>

char	*string_destroy(t_string *s, bool save_content)
{
	char	*tmp;

	tmp = s->content;
	if (save_content == false)
	{
		free(tmp);
		tmp = NULL;
	}
	free(s);
	return (tmp);
}
