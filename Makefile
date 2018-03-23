# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:22:14 by ikozlov           #+#    #+#              #
#    Updated: 2018/03/22 19:29:59 by ikozlov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# directories
SRC_DIR = srcs/
INC_DIR = includes/
OBJ_DIR = obj/
BASIC_DIR = basic/
CHAR_DIR = chars/
NUMBERS_DIR = numbers/
STRINGS_DIR = strings/
MATH_DIR = math/

# compiler
CFLAGS = -Wall -Wextra -Werror
INCLUDES = $(INC_DIR)

# files
SRC := $(wildcard $(SRC_DIR)$(BASIC_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(CHAR_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(NUMBERS_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MATH_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(STRINGS_DIR)*.c)
OBJ := $(notdir $(SRC))
OBJ := $(patsubst %, $(OBJ_DIR)%, $(OBJ:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "\`libft\` [INFO] Library created"

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $^
	@mv *.o $(OBJ_DIR)

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo "\`libft\` [INFO] Object folder removed"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "\`libft\` [INFO] Library removed"

re: fclean all