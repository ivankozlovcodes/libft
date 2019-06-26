/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:09:59 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/09/01 09:43:35 by ikozlov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H

# include "ftstring.h"
# include "ft_printf.h"

/*
**	Key codes
**	up - "\033[A"
**	down - "\033[B"
**	left - "\033[D"
**	right - "\033[C"
*/
enum					e_key
{
	KENTER = 10,
	KESC = 27,
	KSPACE = 32,
	KBSPACE = 0x7f,
	KUP = 0x00415b1b,
	KDOWN = 0x00425b1b,
	KRIGHT = 0x00435b1b,
	KLEFT = 0x00445b1b,
	KDELETE = 2117294875,
	KCTRL_D = 0x04,
	KHOME = 0x00485b1b,
	KEND = 0x00465b1b
};
typedef enum e_key		t_key;

# define CURPOS "\033[6n"
# define SEND_CURPOS_SQN(fd) (write((fd), CURPOS, ft_strlen(CURPOS)))

#endif
