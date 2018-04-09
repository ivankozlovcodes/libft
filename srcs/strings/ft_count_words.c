/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 13:53:47 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/09 13:54:13 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	ft_count_words(char const *s, char c)
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
