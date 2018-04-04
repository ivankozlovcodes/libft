/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:44:48 by ikozlov           #+#    #+#             */
/*   Updated: 2018/04/03 21:27:21 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H
# include <stddef.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstlast(t_list *list);
void				ft_lstdellast(t_list *list, void (*del)(void *, size_t));
t_list				*ft_lstdelfirst(t_list **list, void (*del)(void *, size_t));
void				ft_lstaddlst(t_list **al, t_list *bl);
void				ft_lstaddback(t_list **alst, t_list *new);
void				ft_lstsort(t_list *list, int (cmp)(t_list *a, t_list *b));
size_t				ft_lstcount(t_list *l);

void				ft_save_content(void *data, size_t size);
void				ft_free_content(void *data, size_t size);

#endif
