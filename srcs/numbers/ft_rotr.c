/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 06:28:30 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/04 12:19:37 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	rotr(unsigned int val, unsigned int shift)
{
	return ((val >> shift) | (val << (32 - shift)));
}
