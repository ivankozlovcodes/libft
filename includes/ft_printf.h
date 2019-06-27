/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 09:45:05 by ikozlov           #+#    #+#             */
/*   Updated: 2019/06/26 20:56:23 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <wchar.h>
# include <errno.h>

# define MDF_L (0)
# define MDF_H (1)
# define MDF_J (2)
# define MDF_Z (3)
# define MDF_W (4)
# define MDF_LL (10)
# define MDF_HH (11)

# define OCTAL "01234567"
# define DECIMAL "0123456789"
# define HEX "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

# define FLAGS "#0- +"
# define MODIFIERS "lhjzw"
# define FORMATS "sSpdDioOuUxXcC%"

# define THREE_BYTES_MASK (0xE08080)
# define TWO_BYTES_MASK (0xC080)
# define FOUR_BYTES_MASK (0xF0808080)

extern int			printf_fd;

typedef struct		s_finfo
{
	int				modifier;
	int				precision;
	int				width;
	int				padding;
	char			format;
	char			padding_char;
	char			*base;
	char			*p_string;
	char			*prefix;
	char			flags[6];
}					t_finfo;

size_t				ft_printf(const char *fmt, ...);
size_t				ft_dprintf(int fd, const char *fmt, ...);
size_t				ft_vprintf(int fd, va_list *args, const char *fmt);

size_t				process_arg(va_list *args, char **ptr);

size_t				print_arg_int(va_list *args, t_finfo *fmt);
size_t				print_arg_uint(va_list *args, t_finfo *fmt);
size_t				print_arg_lint(va_list *args, t_finfo *fmt);
size_t				print_arg_char(va_list *args, t_finfo *fmt);
size_t				print_arg_ptr(va_list *args, t_finfo *fmt);

size_t				ft_putfmtwd(t_finfo *fmt, wchar_t *s);
size_t				ft_print_wchar(wint_t c);
size_t				ft_putfmtc(char c, t_finfo *fmt);
size_t				ft_putfmt(void *p, t_finfo *fmt);

int					apply_flags(t_finfo *fmt, char *output, size_t output_len);
int					apply_precision(t_finfo *fmt, char **output, size_t *len);
int					apply_precision_nbr(t_finfo *fmt, char *output, size_t len);

int					skipstr(char **s1, char *s2);
int					skipchr(char **s, char c);
int					ft_prsnbr(char **s, int *dst);
int					has_flag(t_finfo *f, char flag);
int					get_mask(wint_t c, size_t *len);

#endif
