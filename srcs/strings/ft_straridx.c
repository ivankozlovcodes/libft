/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straridx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/27 15:58:27 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/04/28 00:44:47 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"

/*
**	Returns index of string s in array strings
**	@param s - string to lookup
**	@param strings - array of strings
**	@return index of srtinf s in strings(-1 if not found)
*/

int		ft_straridx(char *s, char **strings)
{
	int		idx;

	idx = -1;
	while (strings && strings[++idx])
		if (ft_strcmp(s, strings[idx]) == 0)
			return (idx);
	return (-1);
}
