/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:35:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/19 20:31:07 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	char buff[1000];
	if (!strcmp(argv[1], "strcat"))
	{
		strcpy(buff, argv[2]);
		printf("Mine: %s\n", ft_strcat(buff, argv[3]));
		strcpy(buff, argv[2]);
		printf("Original: %s\n", strcat(buff, argv[3]));
	}
	if (!strcmp(argv[1], "strncat"))
	{
		strcpy(buff, argv[2]);
		printf("Original: %s\n", strncat(buff, argv[3], atoi(argv[4])));
		strcpy(buff, argv[2]);
		printf("Mine: %s\n", ft_strncat(buff, argv[3], atoi(argv[4])));
	}
	if (!strcmp(argv[1], "strchr"))
		printf("%s", ft_strchr(argv[2], *argv[3]));
	if (!strcmp(argv[1], "strrchr"))
		printf("%s", ft_strrchr(argv[2], *argv[3]));
}