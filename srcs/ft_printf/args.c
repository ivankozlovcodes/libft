/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:55:20 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 22:39:57 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "strings.h"

int		parse_wildchar(va_list *args, int *dst, char **ptr)
{
	int		res;

	if (**ptr == '*')
	{
		*dst = va_arg(*args, int);
		(*ptr)++;
	}
	else if (!ft_prsnbr(ptr, dst))
		return (0);
	if ((parse_wildchar(args, &res, ptr)))
		*dst = res;
	return (1);
}

void	parse_flags(char **ptr, t_finfo *fmt)
{
	int		i;

	i = 0;
	while (ft_strchr(FLAGS, **ptr) && **ptr)
	{
		if (!ft_strchr(fmt->flags, **ptr))
			fmt->flags[i++] = **ptr;
		(*ptr)++;
	}
	fmt->flags[i] = '\0';
}

char	*parse_arg(va_list *args, t_finfo *fmt, char **ptr)
{
	char	*tmp;

	parse_flags(ptr, fmt);
	parse_wildchar(args, &(fmt->width), ptr);
	if (fmt->width < 0)
	{
		fmt->width = -fmt->width;
		fmt->padding = -1;
	}
	if (skipchr(ptr, '.'))
	{
		fmt->precision = 0;
		parse_wildchar(args, &(fmt->precision), ptr);
	}
	tmp = *ptr;
	if ((tmp = ft_strstrend(*ptr, "ll")))
		fmt->modifier = MDF_LL;
	else if ((tmp = ft_strstrend(*ptr, "hh")))
		fmt->modifier = MDF_HH;
	else if ((fmt->modifier = ft_strchri(MODIFIERS, **ptr)) != -1)
		(*ptr)++;
	*ptr = tmp ? tmp : *ptr;
	fmt->format = **ptr;
	return (*ptr);
}

size_t	print_arg(va_list *args, t_finfo *fmt)
{
	char	f;

	f = fmt->format ? fmt->format : -1;
	if (ft_strchr("di", f))
		return (print_arg_int(args, fmt));
	else if (ft_strchr("oOuUxX", f) != NULL)
		return (print_arg_uint(args, fmt));
	else if (f == 'c' || f == 'C')
		return (print_arg_char(args, fmt));
	else if (ft_strchr("UD", f))
		return (print_arg_lint(args, fmt));
	else if (ft_strchr("psS", f))
		return (print_arg_ptr(args, fmt));
	else if (f > 0)
		return (ft_putfmtc(f, fmt));
	return (0);
}

size_t	process_arg(va_list *args, char **ptr)
{
	t_finfo	fmt;
	int		i;

	fmt.modifier = -1;
	fmt.width = 0;
	fmt.padding = 1;
	fmt.precision = -1;
	fmt.prefix = "\0";
	fmt.p_string = NULL;
	i = -1;
	while (++i < 6)
		fmt.flags[i] = '\0';
	if (**ptr == '%')
	{
		(*ptr)++;
		if (*ptr != '\0')
		{
			*ptr = parse_arg(args, &fmt, ptr);
			if (**ptr != 0)
				(*ptr)++;
			return (print_arg(args, &fmt));
		}
	}
	return (0);
}
