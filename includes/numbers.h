/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:48:29 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/06 19:01:47 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBERS_H
# define FT_NUMBERS_H

# include <stddef.h>

size_t	ft_nbrlen(void *n);
char	*ft_nbrtobase(unsigned long long n, char *base);
char	*ft_itoa(int n);
char	*ft_llitoa(long long int n);
char	*ft_llitoa_tobase(long long int n, char *base);

#endif
