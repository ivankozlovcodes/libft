/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 19:00:11 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/12 19:13:51 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdlib.h>

void	ft_free(int count, ...)
{
	void	*p;
	va_list	args;

	va_start(args, count);
	while (count--)
	{
		p = va_arg(args, void *);
		if (p)
			free(p);
	}
	va_end(args);
}
