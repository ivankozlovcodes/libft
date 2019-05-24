/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 19:38:47 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/24 19:47:07 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

void	dict_remove(t_dict *d, char *key)
{
	size_t		i;

	i = dict_index_of(d, key);
	if ((int)i >= 0)
	{
		ft_free(2, d->values[i].key, d->values[i].val);
		ft_memcpy(&d->values[i], &d->values[i + 1],
			sizeof(t_dict_pair) * (d->count - i));
		d->count--;
	}
}
