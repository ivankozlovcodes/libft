/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 05:54:30 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 19:06:18 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putc_fd(int c, int fd)
{
	return (write(fd, &c, 1));
}

int		ft_putc_err(int c)
{
	return (ft_putc_fd(c, STDERR_FILENO));
}

int		ft_putc(int c)
{
	return (ft_putc_fd(c, STDOUT_FILENO));
}
