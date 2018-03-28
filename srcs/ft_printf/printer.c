/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:21:54 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:43:42 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

size_t	print_arg_int(va_list *args, t_finfo *fmt)
{
	int				m;
	long long int	n;

	m = fmt->modifier;
	fmt->base = DECIMAL;
	if (m == MDF_LL)
		n = (long long)va_arg(*args, long long int);
	else if (m == MDF_L)
		n = (long)va_arg(*args, long int);
	else if (m == MDF_H)
		n = (short)va_arg(*args, int);
	else if (m == MDF_HH)
		n = (signed char)va_arg(*args, int);
	else if (m == MDF_J)
		n = va_arg(*args, intmax_t);
	else if (m == MDF_Z)
		n = va_arg(*args, size_t);
	else
		n = (int)va_arg(*args, int);
	return (ft_putfmt((void *)&n, fmt));
}

size_t	print_arg_uint(va_list *args, t_finfo *fmt)
{
	unsigned long long int	n;

	fmt->base = DECIMAL;
	if (fmt->format == 'o'
		|| fmt->format == 'O')
		fmt->base = OCTAL;
	else if (fmt->format == 'x')
		fmt->base = HEX;
	else if (fmt->format == 'X')
		fmt->base = HEX_UPPER;
	if (fmt->modifier == MDF_LL || fmt->format == 'U')
		n = (unsigned long long)va_arg(*args, unsigned long long int);
	else if (fmt->modifier == MDF_L || fmt->format == 'O')
		n = va_arg(*args, unsigned long int);
	else if (fmt->modifier == MDF_HH)
		n = (unsigned char)va_arg(*args, unsigned int);
	else if (fmt->modifier == MDF_H)
		n = (unsigned short)va_arg(*args, unsigned int);
	else if (fmt->modifier == MDF_J)
		n = va_arg(*args, uintmax_t);
	else if (fmt->modifier == MDF_Z)
		n = va_arg(*args, ssize_t);
	else
		n = (unsigned int)va_arg(*args, unsigned int);
	return (ft_putfmt((void *)&n, fmt));
}

size_t	print_arg_ptr(va_list *args, t_finfo *fmt)
{
	void	*p;

	if (fmt->modifier == MDF_L && fmt->format == 's')
		fmt->format = 'S';
	if (fmt->format == 's' && fmt->modifier == MDF_W)
	{
		p = (wchar_t *)va_arg(*args, wchar_t *);
		return (ft_putfmtwd(fmt, p));
	}
	p = va_arg(*args, void *);
	return (ft_putfmt(p, fmt));
}

size_t	print_arg_char(va_list *args, t_finfo *fmt)
{
	wint_t		n;
	char		f;
	int			m;

	m = fmt->modifier;
	f = fmt->format;
	if (m == MDF_L)
		f = 'C';
	if (f == 'c' && fmt->modifier == MDF_W)
		n = (wint_t)va_arg(*args, wint_t);
	else
		n = (char)va_arg(*args, int);
	return (ft_putfmt((void *)&n, fmt));
}

size_t	print_arg_lint(va_list *args, t_finfo *fmt)
{
	long int	n;

	fmt->base = DECIMAL;
	n = va_arg(*args, long int);
	return (ft_putfmt((void *)&n, fmt));
}
