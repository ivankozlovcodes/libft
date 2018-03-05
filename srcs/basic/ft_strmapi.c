/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:58:26 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 18:01:14 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*res;

	if (!s || !f)
		return (NULL);
	if ((res = ft_strnew(ft_strlen(s))))
	{
		i = -1;
		while (s[++i])
			res[i] = f(i, s[i]);
		res[i] = '\0';
	}
	return (res);
}
