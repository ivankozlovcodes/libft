/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:48:29 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/04 12:08:08 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMBERS_H
# define FT_NUMBERS_H

# include <stddef.h>

size_t			ft_nbrlen(void *n);
char			*ft_nbrtobase(unsigned long long n, char *base);
char			*ft_itoa(int n);
int				ft_atoi(char *s);
char			*ft_llitoa(long long int n);
char			*ft_llitoa_tobase(long long int n, char *base);
char			*ft_ullitoa_tobase(unsigned long long int n, char *base);
int				to_little_endian(int c);
size_t			to_le_64(size_t be);
int				is_in_arr(int *a, int size, int el);
unsigned int	left_rotate(unsigned int val, unsigned int shift);
unsigned int	rotr(unsigned int val, unsigned int shift);

#endif
