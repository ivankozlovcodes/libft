/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:41:11 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/19 18:10:59 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	if (*needle == '\0')
		return (haystack);
	i = 0;
	j = 0;
	while (haystack[i])
	{
		while (needle[j] && haystack[i + j]
			&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return (haystack + i);
		i++;
	}
}
