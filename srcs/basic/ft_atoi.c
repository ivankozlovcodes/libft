/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:35:45 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 09:25:40 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *s)
{
	int		neg;
	int		res;
	char	c;

	while ((c = *s) && ISSPACE(c))
		s++;
	neg = c == '-';
	s += c == '-' || c == '+';
	res = 0;
	while ((c = *s++) && ft_isdigit(c))
		res = res * 10 - c + '0';
	return (neg ? res : -res);
}
