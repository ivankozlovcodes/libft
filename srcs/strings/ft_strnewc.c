/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnewc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 21:11:57 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/09 21:21:22 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The length of new string.
**				2. The character to fill the sting.
** Operation:	Allocates and returns new string filled with charactre c
**				Example: ft_strnewc(5, 'a');
**				returns string "aaaaa\0"
** Return:		New string filled with charater c
*/

#include <stdlib.h>

char	*ft_strnewc(size_t size, char c)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (size + 1));
	s[size] = '\0';
	while (size-- != 0)
		s[size] = c;
	return (s);
}
