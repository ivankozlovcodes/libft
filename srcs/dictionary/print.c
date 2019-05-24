/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:41:24 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/23 22:13:12 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "dictionary.h"

void	dict_print(t_dict *d, const char *format)
{
	size_t			i;
	const char		*f;

	i = -1;
	f = format == NULL ? "{ %s: %s }\n" : format;
	while (++i < d->count)
		ft_printf(f, d->values[i].key, d->values[i].val);
}