/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_to_darr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 07:25:47 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/27 07:30:31 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "memory.h"

/*
**	Converts list to a NULL terminated 2d array.
**	Assumes that size of array value can be measured
**	(for example NULL string)
**	@param	alst - list to convert
**	@return pointer to 2d array
*/

void		**lst_to_darr(t_list *alst)
{
	size_t	i;
	size_t	size;
	void	**ret;

	i = 0;
	size = ft_lstcount(alst);
	ret = ft_memalloc(sizeof(void *) * (size + 1));
	while (alst)
	{
		ret[i] = alst->content;
		alst = alst->next;
		i++;
	}
	return (ret);
}
