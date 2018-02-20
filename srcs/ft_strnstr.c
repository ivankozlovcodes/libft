/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:15:38 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/19 18:22:34 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftlib.h"

char	*ft_strstr(char *haystack, char *needle, size_t len)
{
	size_t i;
	size_t j;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	j = 0;
	while (haystack[i] && i < len)
	{
		while (needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
}
