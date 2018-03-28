/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 10:53:32 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 21:06:51 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char *s2;

	if ((s2 = (char *)malloc(ft_strlen(s1) + 1)))
		ft_strcpy(s2, s1);
	return (s2);
}
