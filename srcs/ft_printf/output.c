/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/09 21:03:03 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 21:15:26 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		g_printf_fd;

size_t	ft_putfmtc(char c, t_finfo *fmt)
{
	size_t		len;

	len = 1;
	apply_flags(fmt, &c, len);
	if (fmt->padding > 0)
		ft_putnchar_fd(fmt->padding_char, fmt->width - 1, g_printf_fd);
	ft_putchar(c);
	if (fmt->padding < 0)
		ft_putnchar_fd(fmt->padding_char, fmt->width - 1, g_printf_fd);
	ft_free(1, fmt->p_string);
	return (MAX(fmt->width, 1));
}

size_t	ft_putfmtstr(t_finfo *fmt, char *s)
{
	size_t	len;

	if (!s && ft_strchr("sS", fmt->format))
		s = ft_strdup("(null)");
	len = ft_strlen(s);
	apply_precision(fmt, &s, &len);
	apply_flags(fmt, s, len);
	len += ft_strlen(fmt->prefix);
	if (fmt->padding_char == '0')
	{
		if (*s == '-')
			ft_putchar(*s++);
		ft_putstr_fd(fmt->prefix, g_printf_fd);
	}
	if (fmt->padding > 0)
		ft_putnchar_fd(fmt->padding_char, fmt->width - len, g_printf_fd);
	if (fmt->padding_char == ' ')
		ft_putstr_fd(fmt->prefix, g_printf_fd);
	ft_putstr_fd(s, g_printf_fd);
	if (fmt->padding < 0)
		ft_putnchar_fd(fmt->padding_char, fmt->width - len, g_printf_fd);
	len = MAX(fmt->width, (int)len);
	ft_free(2, s, fmt->p_string);
	return (len);
}

size_t	ft_putfmtnbr(t_finfo *fmt, char *s)
{
	size_t	len;
	size_t	p_len;
	int		padding_size;

	len = 0;
	if (*s == '-' && s++)
		fmt->prefix = "-";
	len = ft_strlen(s);
	len += apply_precision_nbr(fmt, s, len);
	len += apply_flags(fmt, s, len);
	p_len = ft_strlen(fmt->prefix);
	padding_size = fmt->width - MAX((int)len, fmt->precision) - p_len;
	if (fmt->padding_char == '0')
		ft_putstr_fd(fmt->prefix, g_printf_fd);
	if (fmt->padding > 0)
		ft_putnchar_fd(fmt->padding_char, padding_size, g_printf_fd);
	if (fmt->padding_char == ' ')
		ft_putstr_fd(fmt->prefix, g_printf_fd);
	ft_putstr_fd(fmt->p_string, g_printf_fd);
	ft_putstr_fd(s, g_printf_fd);
	if (fmt->padding < 0)
		ft_putnchar_fd(fmt->padding_char, padding_size, g_printf_fd);
	ft_free(2, *fmt->prefix == '-' ? s - 1 : s, fmt->p_string);
	return (MAX(fmt->width, (int)len + (int)p_len));
}

char	*convert_nbr_arg(void *p, t_finfo *fmt)
{
	char	f;
	char	*s;

	s = NULL;
	f = fmt->format;
	if (f == 'p')
		s = ft_ullitoa_tobase((unsigned long)p, HEX);
	else if (ft_strchr("oOuUxX", f))
		s = ft_ullitoa_tobase(*(unsigned long long int *)p, fmt->base);
	else
		s = ft_llitoa_tobase(*(long long int *)p, fmt->base);
	return (s);
}

size_t	ft_putfmt(void *p, t_finfo *fmt)
{
	char			f;
	char			*s;

	f = fmt->format;
	s = NULL;
	if (f == 'c' && fmt->modifier == MDF_W)
		return (ft_print_wchar(*(wchar_t *)p));
	else if (f == 'c' || f == 'C')
		return (ft_putfmtc(*(char *)p, fmt));
	else if (f == 's' || f == 'S')
	{
		if (f == 'S' || fmt->modifier == MDF_W)
			return (ft_putfmtwd(fmt, (wchar_t *)p));
		else
		{
			if (p)
				s = ft_strdup((char *)p);
		}
	}
	else
		return (ft_putfmtnbr(fmt, convert_nbr_arg(p, fmt)));
	return (ft_putfmtstr(fmt, s));
}
