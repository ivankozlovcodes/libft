/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llitoa_tobase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 18:56:20 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/06 19:03:04 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_llitoa_tobase(long long int n, char *base)
{
	unsigned long long int	nbr;
	int						len;
	int						is_negative;
	int						base_len = strlen(base);
	char					*str;

	is_negative = n < 0 ? 1 : 0;
	nbr = (unsigned long long int)n;
	nbr = is_negative ? -nbr : nbr;
	len = 2;
	while (nbr /= base_len)
		len++;
	nbr = (unsigned long long int)n;
	len += is_negative;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len-- >= 0)
	{
		str[len] = base[nbr % base_len];
		nbr /= base_len;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
