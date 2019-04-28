/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:37:02 by ikozlov           #+#    #+#             */
/*   Updated: 2019/03/05 03:32:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chars.h"
#include "ftstring.h"

char	*ft_strtrim(char const *s)
{
	char	*start;

	if (!s)
		return (NULL);
	while (ISSPACE1(*s))
		s++;
	if (!*s)
		return (ft_strnew(0));
	start = (char *)s;
	while (*s)
		s++;
	s--;
	while (ISSPACE1(*s))
		s--;
	return (ft_strsub(start, 0, s - start + 1));
}
