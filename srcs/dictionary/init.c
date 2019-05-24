/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:12:03 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/23 18:39:07 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dictionary.h"

t_dict		*dict_init(size_t capacity)
{
	t_dict		*ret;

	ret = ft_memalloc(sizeof(t_dict));
	ret->capacity = capacity > 0 ? capacity : DEFAULT_DICT_SIZE;
	ret->values = ft_memalloc(sizeof(t_dict_pair) * ret->capacity);
	return (ret);
}
