/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isstrspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 13:18:12 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/28 13:19:58 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

#include "chars.h"

bool	isstrspace(char *s)
{
	size_t		i;

	i = -1;
	while (s[++i])
		if (!ISSPACE(s[i]))
			return (false);
	return (true);
}
