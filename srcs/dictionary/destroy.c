/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 22:38:57 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/24 22:40:07 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

void	dict_destroy(t_dict *d)
{
	size_t		i;

	i = -1;
	while (++i < d->count)
		ft_free(2, d->values[i].key, d->values[i].val);
	ft_free(2, d->values, d);
}
