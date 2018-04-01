/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_in_arr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 18:31:30 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/31 18:35:30 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. An array of int
**				2. Size of array
**				3. Element to find
** Operation:	Searches for element in array.
** Return:		Index of element in array.
*/

int		is_in_arr(int *a, int size, int el)
{
	int		i;

	i = -1;
	while (++i < size)
		if (a[i] == el)
			return (i);
	return (-1);
}
