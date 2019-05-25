/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/27 20:40:51 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/23 18:34:10 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMORY_H
# define FT_MEMORY_H
# include <stddef.h>

# define _SIZET(len) (sizeof(size_t) * len)

void				ft_bzero(void *s, size_t n);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dst, void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memset(void *b, int c, size_t len);
void				*ft_memdup(const void *src, size_t n);
int					ft_free(int count, ...);
void				*ft_realloc(void *ptr, size_t size, size_t newsize);

size_t				darrlen(void **arr);
void				darrfree(void **arr);

#endif
