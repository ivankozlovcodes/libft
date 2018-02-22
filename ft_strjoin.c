/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:27:15 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 18:51:05 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	if (!s1 || !s2 || !(res = ft_strnew(ft_strlen(s1) + ft_strlen(s2))))
		return (NULL);
	res = ft_strcat(res, s1);
	return (ft_strcat(res, s2));
}
