/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:08:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/12 15:24:17 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define MIN(a,b) ((a > b) ? (b) : (a))
# define MAX(a, b) ((a) > (b) ? (a) : (b))

long long int	ft_pow(int n, unsigned int p);

#endif
