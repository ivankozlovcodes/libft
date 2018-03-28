/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa_tobase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:56:20 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 21:02:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strings.h"
#include <stdlib.h>

char	*ft_llitoa_tobase(long long int n, char *base)
{
	unsigned long long int	nbr;
	int						len;
	int						base_len;
	char					*str;

	base_len = ft_strlen(base);
	nbr = (unsigned long long int)n;
	nbr = n < 0 ? -nbr : nbr;
	len = 2;
	while (nbr /= base_len)
		len++;
	nbr = (unsigned long long int)n;
	nbr = n < 0 ? -nbr : nbr;
	len += n < 0;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len-- > 0)
	{
		str[len] = base[nbr % base_len];
		nbr /= base_len;
	}
	str[0] = n < 0 ? '-' : str[0];
	return (str);
}
