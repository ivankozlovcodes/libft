/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   queue.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 16:49:14 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/03 21:06:55 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef QUEUE_H
# define QUEUE_H

# include <stddef.h>

/*
** Dynamic queue based on generic list
*/

void			*q_pop(void);
void			*q_peek(void);
void			q_init(void);
void			q_destroy(void (*del)(void *, size_t));
size_t			q_push(void *data, size_t size);
void			q_print(void);

#endif
