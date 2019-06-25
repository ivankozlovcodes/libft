/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 21:47:54 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 07:19:10 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLIST_H
# define DLIST_H

# include <stddef.h>
# include <stdbool.h>

typedef struct		s_dlist
{
	struct s_dlist	*next;
	struct s_dlist	*prev;
	void			*content;
	size_t			content_size;
}					t_dlist;

size_t				dlstcount(t_dlist *list);
t_dlist				*dlstlast(t_dlist *list);
size_t				dlstindexof(t_dlist *list, t_dlist *el);
void				dlstaddback(t_dlist **list, t_dlist *new);
void				dlstaddfront(t_dlist **list, t_dlist *new);
t_dlist				*dlstnew(void const *content, size_t size);
void				dlstdel(t_dlist **list, void (*del)(void *, size_t));
void				dlstdelone(t_dlist **list, void (*del)(void *, size_t));
void				dlstremove(t_dlist **list, t_dlist *item, void (*del)(void *, size_t));
void				dlstforeachif(t_dlist *list,
	void (*f)(t_dlist *elem, size_t idx, t_dlist *list),
	bool (*cond)(size_t idx, t_dlist *elem));

# define DLIST_ADDCREATE(l, t) (!l ? l = t : dlstaddback(&l, t))

#endif
