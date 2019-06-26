/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 21:09:59 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/06/26 04:13:15 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H

enum					e_key
{
	KENTER = 10,
	KESC = 27,
	KSPACE = 32,
	KBSPACE = 127,
	KUP = 4283163,
	KDOWN = 4348699,
	KLEFT = 4479771,
	KRIGHT = 4414235,
	KDELETE = 2117294875
};
typedef enum e_key		t_key;

#endif
