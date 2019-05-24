/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:17:13 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/23 18:19:11 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "dictionary.h"

size_t		dict_index_of(t_dict *d, char *key)
{
	size_t		ret;

	ret = -1;
	while (++ret < d->count)
		if (ft_strequ(d->values[ret].key, key))
			return (ret);
	return (-1);
}
