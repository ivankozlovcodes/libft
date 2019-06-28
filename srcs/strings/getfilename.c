/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getfilename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:54:45 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/27 17:50:37 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"

char	*getfilename(const char *path)
{
	char	*s;
	char	*name;
	int		slash_idx;

	s = ft_strdup(path);
	ft_strrev(s);
	slash_idx = ft_strchri(s, '/');
	name = slash_idx > 0 ? ft_strndup(s, slash_idx) : s;
	if (name != s)
		ft_strdel(&s);
	return (ft_strrev(name));
}
