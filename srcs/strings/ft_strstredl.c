/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstredl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 10:15:06 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/08 11:07:18 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Argument:	1. The string to search needle in.
**				2. The string to search.
** Operation:	Finds first occurence of needle in haystack
**				and returns pointer to char after it
** Return:		Char pointer to haystack or first char after needle in haystack
*/

char	*ft_strstredl(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i + j);
		i++;
	}
	return (NULL);
}
