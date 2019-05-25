/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_darr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/25 10:08:25 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/25 10:16:13 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

char			**dict_to_darr(t_dict *d, char *(pair_to_str)(t_dict_pair))
{
	size_t		i;
	char		**ret;

	ret = ft_memalloc(sizeof(char *) * (d->count + 1));
	i = -1;
	while (++i < d->count)
		ret[i] = pair_to_str(d->values[i]);
	return (ret);
}
