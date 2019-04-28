/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:30:09 by ikozlov           #+#    #+#             */
/*   Updated: 2018/06/17 00:05:59 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DSTRING_H
# define FT_DSTRING_H

# include <unistd.h>
# include "bool.h"

struct						s_string
{
	char					*content;
	size_t					length;
	size_t					capacity;
};
typedef struct s_string		t_string;

# define DEFAULT_CAPACITY 1024

t_string					*string_init(size_t capacity);
t_bool						string_append(struct s_string *s, char *add);
char						*string_destroy(t_string *s, t_bool save_content);

#endif
