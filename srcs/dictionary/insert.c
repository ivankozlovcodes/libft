/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:16:01 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/23 22:16:55 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "dictionary.h"

bool		dict_insert(t_dict *d, char *key, void *val)
{
	size_t		i;

	i = dict_index_of(d, key);
	if ((int)i >= 0)
	{
		ft_free(1, d->values[i].val);
		d->values[i].val = ft_memdup(val, ft_strlen(val));
		return (true);
	}
	else if (d->count == d->capacity)
	{
		d->capacity *= 2;
		ft_realloc(d->values, _SIZET(d->count), _SIZET(d->capacity));
		if (!d->values)
			return (false);
	}
	d->values[d->count].key = ft_strdup(key);
	d->values[d->count].val = ft_strdup(val);
	d->count++;
	return (true);
}
