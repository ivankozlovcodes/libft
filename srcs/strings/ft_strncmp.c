/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 15:54:30 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/27 21:16:46 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	ch1;
	unsigned char	ch2;

	if (n == 0)
		return (0);
	ch1 = *s1;
	ch2 = *s2;
	while (ch1 == ch2 && ch1 && n--)
	{
		ch1 = *s1++;
		ch2 = *s2++;
	}
	return (ch1 - ch2);
}
