/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 07:44:10 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/22 08:36:46 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned	ft_count_words(char const *s, char c)
{
	unsigned	i;
	unsigned	found_word;

	i = 0;
	while (*s)
	{
		found_word = 0;
		while (*s && *s == c)
			s++;
		s--;
		while (*++s && *s != c)
			found_word = 1;
		i += found_word;
	}
	return (i);
}

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
