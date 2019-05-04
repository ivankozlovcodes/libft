/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 11:31:50 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/04 11:33:46 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chars.h"
#include "ftstring.h"

char	*ft_strtoupper(char *string)
{
	size_t		i;
	size_t		len;

	i = -1;
	len = ft_strlen((const char *)string);
	while (++i < len)
		string[i] = ft_toupper(string[i]);
	return (string);
}
