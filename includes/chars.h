/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chars.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 15:00:57 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 15:23:55 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHARS_H
# define FT_CHARS_H

# include <unistd.h>

# define ISSPACE(c) (ISSPACE1(c) || ISSPACE2(c))
# define ISSPACE1(c) (c == ' ' || c == '\t' || c == '\n')
# define ISSPACE2(c) (c == '\r' || c == '\v' || c == '\f')

void				ft_putnstr(const char *s, size_t size);
void				ft_putnstr_fd(const char *s, size_t n, int fd);
void				ft_putnchar_fd(char c, int n, int fd);
void				ft_putnchar(char c, int n);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_toupper(int a);
int					ft_tolower(int a);

#endif
