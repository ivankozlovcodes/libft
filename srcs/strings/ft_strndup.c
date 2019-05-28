/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:47:31 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/28 13:48:11 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory.h"
#include "ftstring.h"

char		*ft_strndup(const char *src, size_t n)
{
	char	*ret;

	ret = ft_strnew(n);
	return (ft_memcpy(ret, src, n));
}
