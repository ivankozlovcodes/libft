/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ullitoa_tobase.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/08 10:52:47 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/08 19:47:57 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ullitoa_tobase(unsigned long long int n, char *base)
{
	unsigned long long int	nbr;
	int						len;
	int						base_len;
	char					*str;

	nbr = n;
	len = 2;
	base_len = ft_strlen(base);
	while (nbr /= base_len)
		len++;
	nbr = n;
	if (!(str = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	str[--len] = '\0';
	while (len-- > 0)
	{
		str[len] = base[nbr % base_len];
		nbr /= base_len;
	}
	return (str);
}
