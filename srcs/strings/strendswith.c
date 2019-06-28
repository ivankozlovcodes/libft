/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strendswith.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:44:03 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/27 17:09:47 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

bool		strendswith(const char *s1, const char *s2)
{
	size_t		diff;

	diff = ft_strlen(s1) - ft_strlen(s2);
	return (ft_strequ(s1 + diff, s2));
}
