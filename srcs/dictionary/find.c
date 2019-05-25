/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 20:03:18 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/24 20:04:58 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

void	*dict_find(t_dict *d, char *key)
{
	size_t		i;

	i = dict_index_of(d, key);
	if ((int)i >= 0)
		return (d->values[i].val);
	return (NULL);
}
