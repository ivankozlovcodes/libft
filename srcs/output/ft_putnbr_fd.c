/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 13:40:32 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/11 15:46:04 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "strings.h"
#include "output.h"
#include <stdlib.h>

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
