/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstring.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/07 10:16:33 by ikozlov           #+#    #+#             */
/*   Updated: 2019/05/28 13:48:21 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FTSTRING_H
# define FT_FTSTRING_H

# include <stddef.h>
# include <unistd.h>
# include <stdbool.h>

# define SPACE " "
# define NEW_LINE "\n"
# define CLEAR_SCREEN_ANSI_CODE "\e[1;1H\e[2J"

# define IS_QUOTE(c) (c == '"' || c == '\'')

# define CLEAR_SCREEN() (write(STDOUT_FILENO, CLEAR_SCREEN_ANSI_CODE, 12))

char				*ft_strnewc(size_t size, char c);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
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
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
int					ft_straridx(char *s, char **strings);
char				*ft_strtoupper(char *string);
unsigned			ft_count_words(char const *s, char c);
bool				isstrspace(char *s);
char				*ft_strndup(const char *src, size_t n);

int					ft_strchri(char *s, char c);
char				*ft_strchr(const char *s, int c);
int					ft_strchrstri(char *s1, char *s2);
char				*ft_strstr(char *haystack, char *needle);
char				*ft_strstrend(char *haystack, char *needle);

bool				strisalnum(const char *s);
bool				strendswith(const char *s1, const char *s2);

#endif
