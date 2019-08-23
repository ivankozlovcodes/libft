/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pair_to_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: batman <ikozlov@student.42.us.org>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 21:02:33 by batman            #+#    #+#             */
/*   Updated: 2019/08/22 21:06:47 by batman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "dictionary.h"

/*
**	Converts dictionary pair to string using connector
**	Example: key: "1", value: "asd", connector: "="
**	Result: "1=asd"
**
**	pair:		dictionary pair value to convert
**	connector:	connector string to concat or NULL
**
**	return: char pointer, converted key/value pair
*/
char	*pair_to_str(t_dict_pair pair, char *connector)
{
	char		*ret;
	size_t		key_len;
	size_t		val_len;
	size_t		connector_len;

	key_len = ft_strlen(pair.key);
	val_len = ft_strlen(pair.val);
	connector_len = connector ? ft_strlen(connector) : 0;
	ret = ft_strnew(key_len + val_len + connector_len);
	ft_strcat(ret, pair.key);
	if (connector)
		ft_strcat(ret, connector);
	ft_strcat(ret, pair.val);
	return (ret);
}
