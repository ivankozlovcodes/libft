/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstring.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 10:16:33 by ikozlov           #+#    #+#             */
/*   Updated: 2019/04/28 00:48:15 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGS_H
# define FT_STRINGS_H
# include <stddef.h>

# define SPACE " "
# define NEW_LINE "\n"

char				*ft_strstrend(char *haystack, char *needle);
int					ft_strchri(char *s, char c);
char				*ft_strnewc(size_t size, char c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int c);
void				ft_strclr(char *s);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strcpy(char *dst, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *s1);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strjoin(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
size_t				ft_strlen(const char *s);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strnstr(char *haystack, char *needle, size_t len);
char				*ft_strrchr(const char *s, int c);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char *haystack, char *needle);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_straridx(char *s, char **strings);
unsigned			ft_count_words(char const *s, char c);

#endif
