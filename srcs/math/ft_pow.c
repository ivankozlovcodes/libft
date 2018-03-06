/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:06:29 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/05 20:17:41 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long long int	ft_pow(int n, unsigned int p)
{
	unsigned int	i;
	long long int	res;

	if (p == 0)
		return (1);
	res = (long long int)n;
	i = 0;
	while (++i < p)
		res *= res;
	return (res);
}
