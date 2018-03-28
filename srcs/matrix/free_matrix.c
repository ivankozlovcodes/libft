/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:25:15 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/28 13:26:29 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix.h"
#include "memory.h"
#include <stdlib.h>

void	free_matrix(t_matrix *m)
{
	int		i;

	i = -1;
	while (++i < m->rows)
		ft_memdel(&(m->m[i]));
	free(m->m);
}
