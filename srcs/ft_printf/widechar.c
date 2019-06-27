/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   widechar.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 21:07:29 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 15:29:57 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "numbers.h"
#include "output.h"

size_t	ft_print_wchar(wint_t c)
{
	int		output;
	size_t	len;

	output = FOUR_BYTES_MASK;
	if (c <= 0x7F)
	{
		output = c & 127;
		len = 1;
	}
	else
	{
		output = get_mask(c, &len);
		output |= (((c >> 6) & 0x3F) << 8) | (c & 0x3F);
		if (c > 0x7FF)
			output |= (((c >> 12) & 0xF) << 16);
		if (c > 0xFFFF)
			output |= (((c >> 18) & 0x7) << 24);
	}
	output = to_little_endian(output);
	write(printf_fd, &output, sizeof(wchar_t));
	return (len);
}

size_t	ft_putfmtwd(t_finfo *fmt, wchar_t *s)
{
	int		len;

	len = 0;
	while (s && *s)
	{
		if (fmt->modifier == MDF_W)
			len += ft_print_wchar(*s);
		else
		{
			ft_putchar_fd((char)*s, printf_fd);
			len++;
		}
		s++;
	}
	return (len);
}
