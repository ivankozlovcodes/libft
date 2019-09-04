/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 20:03:18 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/09/04 13:32:42 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "dictionary.h"

void	*dict_find(t_dict *d, char *key, bool duplicate)
{
	size_t		i;

	i = dict_index_of(d, key);
	if ((int)i >= 0)
	{
		if (duplicate)
			return ft_strdup(d->values[i].val);
		return (d->values[i].val);
	}
	return (NULL);
}
