/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:44:10 by ikozlov           #+#    #+#             */
/*   Updated: 2019/03/05 03:32:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftstring.h"
#include <stdlib.h>

static char		*ft_get_word(const char **s, char c)
{
	char	*start;
	char	*res;

	while (**s && **s == c)
		(*s)++;
	start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	res = ft_strsub(start, 0, *s - start + 1);
	res[*s - start] = 0;
	return (res);
}

char			**ft_strsplit(char const *s, char c)
{
	unsigned	words;
	unsigned	i;
	char		**res;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	if ((res = (char **)malloc(sizeof(char *) * words + 1)))
	{
		i = 0;
		while (i < words)
			res[i++] = ft_get_word(&s, c);
		res[i] = NULL;
	}
	return (res);
}
