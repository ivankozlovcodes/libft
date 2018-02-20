/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 18:35:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/02/19 19:20:54 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char *argv[])
{
	if (!strcmp(argv[1], "strchr"))
		printf("%s", ft_strchr(argv[2], *argv[3]));
	if (!strcmp(argv[1], "strrchr"))
		printf("%s", ft_strrchr(argv[2], *argv[3]));
}