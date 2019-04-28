/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_left_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/28 00:37:24 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/04/28 00:38:18 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	left_rotate(unsigned int val, unsigned int shift)
{
	return ((val << shift) | (val >> (32 - shift)));
}
