/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:43:59 by ikozlov           #+#    #+#             */
/*   Updated: 2019/03/05 03:32:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*res;

	if (!s || !f)
		return (NULL);
	if ((res = ft_strnew(ft_strlen(s))))
	{
		i = -1;
		while (s[++i])
			res[i] = f(s[i]);
		res[i] = '\0';
	}
	return (res);
}
