/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:40:32 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/20 16:27:49 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*head;
	char	*str;
	char	num[12];

	str = num;
	head = str;
	if (n < 0)
		*str++ = '-';
	*str++ = ABS(n % 10) + '0';
	while ((n /= 10))
		*str++ = ABS(n % 10) + '0';
	*str = '\0';
	ft_strrev(*head == '-' ? head + 1 : head);
	ft_putstr_fd(head, fd);
}
