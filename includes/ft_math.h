/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_math.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:08:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/10 20:42:24 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATH_H
# define FT_MATH_H

# define MIN(a,b) ((a > b) ? (b) : (a))
# define MAX(a, b) ((a) > (b) ? (a) : (b))
# define DISTANCE(a,b,c,d) (ft_sqrt(ft_pow(c - a, 2) + ft_pow(d - b, 2)))
# define ABS(x) (((x) < 0) ? -(x) : (x))
# define SETX(p, _x) ((p->x = _x) || 1)
# define SETY(p, _y) ((p->y = _y) || 1)
# define SETZ(p, _z) ((p->z = _z) || 1)
# define SETXY(p, _x, _y) (SETX(p, _x) && SETY(p, _y))
# define SETXYZ(p, _x, _y, _z) (SETXY(p, _x, _y) && SETZ(p, _z))

struct					s_point
{
	int					x;
	int					y;
};
typedef struct s_point	t_point;

long long int			ft_pow(int n, unsigned int p);
int						ft_sqrt(int nb);

#endif
