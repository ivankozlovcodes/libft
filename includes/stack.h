/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:17:12 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/28 13:45:42 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include <stddef.h>

/*
** Dynamic stack based on generic list
*/

void		*stack_pop(void);
void		*stack_peek(void);
void		stack_init(void);
void		stack_destroy(void (*del)(void *, size_t));
size_t		stack_push(void *data, size_t size);
void		stack_print(void);

#endif
