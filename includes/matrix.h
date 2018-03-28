/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 13:26:37 by ikozlov           #+#    #+#             */
/*   Updated: 2018/03/28 13:27:45 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MATRIX_H
# define FT_MATRIX_H

# define MTX_TOINT(m) (((int **)m))
# define MTX_TOCHAR(m) (((char **)m))

struct					s_matrix
{
	void				**m;
	int					rows;
	int					cols;
};
typedef struct s_matrix	t_matrix;

void					free_matrix(t_matrix *m);

#endif
