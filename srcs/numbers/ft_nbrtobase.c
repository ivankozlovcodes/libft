/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrtobase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:54:59 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/05 19:22:45 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "numbers.h"
#include "math.h"
#include "libft.h"
#include <stdlib.h>

char	*ft_nbrtobase(unsigned long long n, char *base)
{
	char			*str;
	size_t			len;
	size_t			base_len;
	long long int	delim;
	int				i;

	i = -1;
	len = ft_nbrlen((void *)&n);
	base_len = ft_strlen(base);
	str = (char *)malloc(sizeof(char) * (len + 1));
	while (n != 0)
	{
		delim = ft_pow(base_len, --len);
		str[++i] = base[n / delim];
		n %= delim;
	}
	str[i] = '\0';
	return (str);
}
