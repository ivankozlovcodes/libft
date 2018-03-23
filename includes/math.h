/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:08:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/22 21:34:21 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define MIN(a,b) ((a > b) ? (b) : (a))
# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define DISTANCE(a,b,c,d) (ft_sqrt(ft_pow(c - a, 2) + ft_pow(d - b, 2)))

long long int	ft_pow(int n, unsigned int p);
int				ft_sqrt(int nb);

#endif
