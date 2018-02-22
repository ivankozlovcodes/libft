/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 13:29:04 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/19 14:21:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (a + 32);
	else
		return (a);
}