/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   precision.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 18:40:57 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:40:15 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "strings.h"

int		apply_precision_nbr(t_finfo *fmt, char *output, size_t len)
{
	int	res;
	int	p;

	res = 0;
	p = fmt->precision;
	if (p == -1)
		return (res);
	else if (p == 0 && *output == '0')
	{
		if ((!ft_strchr("oO", fmt->format))
			|| (ft_strchr("oO", fmt->format) && !has_flag(fmt, '#')))
		{
			res = -len;
			*output = '\0';
		}
	}
	else if (p > (int)len)
	{
		res = p - (int)len;
		fmt->p_string = ft_strnewc(res, '0');
	}
	return (res);
}

int		apply_precision(t_finfo *fmt, char **output, size_t *len)
{
	int		p;
	int		res;

	p = fmt->precision;
	res = 0;
	if (p == -1)
		return (0);
	if (p == 0)
	{
		(*output)[p] = '\0';
		*len = 0;
	}
	else if (ft_strchr("sS", fmt->format) && (int)*len > p && p > 0)
	{
		(*output)[p] = '\0';
		*len = p;
	}
	return (res);
}
