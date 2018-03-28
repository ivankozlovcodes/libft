/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 18:28:54 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:44:36 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		apply_space_flag(t_finfo *fmt)
{
	char	f;
	int		printed;

	printed = 0;
	f = fmt->format;
	if (ft_strchr("di", f) && has_flag(fmt, ' ') && !*fmt->prefix)
	{
		ft_putchar(' ');
		printed++;
	}
	return (printed);
}

void	apply_hex_flag(t_finfo *fmt, char *output, size_t len)
{
	if (has_flag(fmt, '#') && *output != 0 && *output != '0')
	{
		if (fmt->format == 'x')
			fmt->prefix = "0x";
		else if (fmt->format == 'X')
			fmt->prefix = "0X";
		else if (ft_strchr("oO", fmt->format)
			&& (fmt->precision >= (int)len + 1 || fmt->precision <= 0))
			fmt->prefix = "0";
	}
}

void	apply_plus_flag(t_finfo *fmt)
{
	if (ft_strchr("di", fmt->format) && !fmt->prefix[0])
		if (has_flag(fmt, '+'))
			fmt->prefix = "+";
}

void	apply_zerominus_flags(t_finfo *fmt)
{
	if (has_flag(fmt, '-'))
		fmt->padding = -1;
	if (has_flag(fmt, '-') || !has_flag(fmt, '0')
		|| ((ft_strchr("di", fmt->format) && fmt->precision >= 0)))
		fmt->padding_char = ' ';
	else
		fmt->padding_char = '0';
}

int		apply_flags(t_finfo *fmt, char *output, size_t output_len)
{
	int		res;

	res = 0;
	apply_zerominus_flags(fmt);
	apply_plus_flag(fmt);
	apply_hex_flag(fmt, output, output_len);
	res += apply_space_flag(fmt);
	if (fmt->format == 'p')
		fmt->prefix = "0x";
	return (res);
}
