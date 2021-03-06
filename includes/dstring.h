/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:30:09 by ikozlov           #+#    #+#             */
/*   Updated: 2019/08/31 19:28:47 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DSTRING_H
# define FT_DSTRING_H

# include <unistd.h>
# include <stdbool.h>

struct						s_string
{
	char					*content;
	size_t					length;
	size_t					capacity;
};
typedef struct s_string		t_string;

# define DEFAULT_CAPACITY 1024

t_string					*string_init(size_t capacity);
void						string_init_content(t_string *s, size_t capacity);
bool						string_append(struct s_string *s, char *add);
bool						string_appendn(struct s_string *s,
	char *add, size_t n);
bool						string_insert(t_string *s, char *add, int pos);
char						*string_destroy(t_string *s, bool save_content);
void						string_destroy_content(t_string *s);
void						string_clear_content(t_string *s);
bool						string_splice(t_string *s,
	int start, int delete_count);
bool						string_realloc(t_string *s, char *add);

#endif
