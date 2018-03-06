/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:44:19 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/05 19:24:05 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"

size_t		ft_nbrlen(void *p)
{
	long long int	n;
	size_t			len;

	n = *(long long int *)p;
	len = n > 0 ? 0 : 1;
	n /= 10;
	len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
