/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 18:08:13 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/09/04 13:33:12 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICTIONARY_H
# define DICTIONARY_H

# include <stddef.h>
# include <stdbool.h>

# include "memory.h"

# define DEFAULT_DICT_SIZE 128
# define FEDAULT_PRITN_FORMAT "{ %s: %s }\n"

struct							s_dict_pair
{
	char		*key;
	void		*val;
};
typedef struct s_dict_pair		t_dict_pair;

struct							s_dict
{
	size_t			count;
	size_t			capacity;
	t_dict_pair		*values;
};
typedef struct s_dict			t_dict;

t_dict							*dict_init(size_t capacity);
void							dict_destroy(t_dict *d);
size_t							dict_index_of(t_dict *d, char *key);
bool							dict_insert(t_dict *d, char *key, void *val);
void							dict_remove(t_dict *d, char *key);
void							*dict_find(t_dict *d,
	char *key, bool duplicate);

void							dict_print(t_dict *d, const char *format);

char							**dict_to_darr(t_dict *d,
	char *(pair_to_str)(t_dict_pair));

char							*pair_to_str(t_dict_pair pair, char *connector);

#endif
