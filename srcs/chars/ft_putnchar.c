/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 15:16:30 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 21:14:55 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include "output.h"
#include <stdlib.h>

void	ft_putnchar_fd(char c, int n, int fd)
{
	char	*s;

	if (n > 0)
	{
		s = ft_strnewc(n, c);
		ft_putstr_fd(s, fd);
		free(s);
	}
}

void	ft_putnchar(char c, int n)
{
	char	*s;

	if (n > 0)
	{
		s = ft_strnewc(n, c);
		ft_putstr(s);
		free(s);
	}
}
