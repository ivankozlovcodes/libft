/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchrstri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 17:27:27 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/28 13:29:14 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Find first occurence of any caracter from s2 in s1
**	NOTE: strings should be ASCII and NULL terminated
**	@param s1 - string to search in
**	@param s2 - string with characters to search for
**	@return Index of the element or -1 if not found
**
**	Why? To help with parsing of unix shell commands.
**	Example: echo $HOME~$ENV - need to find both vars
**	HOME and ENV. Parsing should stop at both ~ and $.
*/

#include "memory.h"

int		ft_strchrstri(char *s1, char *s2)
{
	size_t			i;
	unsigned char	c;
	int				ret;
	int				hash[127];

	ft_memset(hash, -1, sizeof(int) * 128);
	i = -1;
	while (s1[++i])
	{
		c = s1[i];
		hash[c] = hash[c] < 0 ? i : hash[c];
	}
	i = -1;
	ret = -1;
	while (s2[++i])
	{
		c = s2[i];
		if (hash[c] >= 0 && (ret == -1 || ret > hash[c]))
			ret = hash[c];
	}
	return (ret);
}
