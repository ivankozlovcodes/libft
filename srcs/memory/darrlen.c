/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darrlen.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 03:20:37 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/21 03:24:53 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/*
** Calculates lenght of NULL terminated array of pointers
** @param arr - pointer array
** @return Lenght of the array
*/

size_t	darrlen(void **arr)
{
	size_t		ret;

	ret = 0;
	if (arr)
		while (arr[ret])
			ret++;
	return (ret);
}
