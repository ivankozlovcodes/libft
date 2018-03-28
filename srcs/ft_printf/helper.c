/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 17:24:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:44:49 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		skipstr(char **s1, char *s2)
{
	int		i;

	if (!s1 || !*s1 || !s2)
		return (0);
	i = -1;
	while ((*s1)[++i] && s2[i])
		if ((*s1)[i] != s2[i])
			return (0);
	if (!s2[i])
		s1 += i;
	return (!s2[i]);
}

int		skipchr(char **s, char c)
{
	if (s && **s == c)
	{
		(*s)++;
		return (1);
	}
	return (0);
}

int		ft_prsnbr(char **s, int *dst)
{
	char	*nbr;
	int		i;

	i = 0;
	if (**s == '-')
		i++;
	while (ft_isdigit((*s)[i]))
		i++;
	if ((**s == '-' && i == 1) || i == 0)
		return (0);
	nbr = (char *)malloc(sizeof(char) * (i + 1));
	ft_strncpy(nbr, *s, i);
	nbr[i] = '\0';
	*dst = ft_atoi(nbr);
	*s += i;
	free(nbr);
	return (1);
}

int		has_flag(t_finfo *f, char flag)
{
	return (ft_strchr(f->flags, flag) ? 1 : 0);
}

int		get_mask(wint_t c, size_t *len)
{
	if (c <= 0x7FF)
	{
		*len = 2;
		return (TWO_BYTES_MASK);
	}
	else if (c <= 0xFFFF)
	{
		*len = 3;
		return (THREE_BYTES_MASK);
	}
	else
	{
		*len = 4;
		return (FOUR_BYTES_MASK);
	}
}
