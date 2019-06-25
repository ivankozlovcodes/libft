/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 05:54:30 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/25 06:25:53 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putc_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}

int		ft_putc(int c)
{
	return (ft_putc_fd(c, STDOUT_FILENO));
}
