/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:30:09 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/26 18:11:02 by ivankozlov       ###   ########.fr       */
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
t_bool						string_appendn(struct s_string *s, char *add, size_t n);
char						*string_destroy(t_string *s, t_bool save_content);

#endif
