/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstredl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 10:15:06 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/10 20:08:21 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Argument:	1. The string to search needle in.
**				2. The string to search.
** Operation:	Finds first occurence of needle in haystack
**				and returns pointer to char after it
** Return:		Char pointer to first char after needle in haystack or NULL
*/

char	*ft_strstrend(char *haystack, char *needle)
{
	int j;

	j = 0;
	while (needle[j] && haystack[j]
		&& haystack[j] == needle[j])
		j++;
	if (needle[j] == '\0')
		return (haystack + j);
	return (NULL);
}
