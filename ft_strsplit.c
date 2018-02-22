/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 18:56:57 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/21 09:56:33 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	ft_count_words(char const *s, char c)
{
	unsigned	i;

	i = 0;
	while (*s)
	{
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (i);
}

static char		*ft_get_word(char const **s, char c)
{
	char	*start;

	if (!s || !*s)
		return (NULL);
	while (**s && **s == c)
		(*s)++;
	start = (char *)*s;
	while (**s && **s != c)
		(*s)++;
	return (**s ? ft_strsub(start, 0, *s - start) : NULL);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**res;
	unsigned	i;
	unsigned	count;

	i = 0;
	if (!s)
		return (NULL);
	count = ft_count_words(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (count + 1))))
		return (NULL);
	while (i <= count)
	{
		res[i] = ft_get_word(&s, c);
		i++;
	}
	return (res);
}
