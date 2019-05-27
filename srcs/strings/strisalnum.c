/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strisalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 19:36:04 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/26 19:41:22 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chars.h"

#include <stdbool.h>

bool	strisalnum(const char *s)
{
	while (*s)
	{
		if (!ft_isalnum(*s))
			return (false);
		s++;
	}
	return (true);
}
