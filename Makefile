# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:22:14 by ikozlov           #+#    #+#              #
#    Updated: 2018/02/19 19:04:48 by ikozlov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a 
SRC_DIR = srcs/
INCLUDES_DIR = includes/
SRCS = $(wildcard $(SRC_DIR)*.c)
BINS = $(patsubst $(SRC_DIR)%.c, %.o, $(SRCS))

.PHONY: all clean fclean

all: $(NAME)

compile:
	gcc -I$(INCLUDES_DIR) -Wall -Wextra -Werror -c $(SRCS)

$(NAME): compile 
	@ar rc $(NAME) $(BINS)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(BINS) 

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all