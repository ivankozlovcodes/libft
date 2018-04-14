/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:02:15 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/13 22:37:52 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_math.h"
#include "strings.h"

void	ft_putnstr(const char *s, size_t n)
{
	size_t	len;

	len = ft_strlen(s);
	write(1, s, MIN(len, n));
}
