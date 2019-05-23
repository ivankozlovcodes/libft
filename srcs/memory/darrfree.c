/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darrfree.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 06:27:24 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/21 06:28:27 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Calculates lenght of NULL terminated array of pointers
** @param arr - pointer array
** @return Lenght of the array
*/

void	darrfree(void **arr)
{
	size_t		ret;

	ret = -1;
	if (arr)
		while (arr[++ret])
			free(arr[ret]);
	free(arr);
}
