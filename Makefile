# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ikozlov <ikozlov@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/02/19 13:22:14 by ikozlov           #+#    #+#              #
#    Updated: 2018/03/28 15:56:06 by ikozlov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

# directories
SRC_DIR = srcs/
INC_DIR = includes/
OBJ_DIR = obj/

MATH_DIR	= math/
LIST_DIR	= list/
CHAR_DIR	= chars/
MATRIX_DIR	= matrix/
MEMORY_DIR	= memory/
OUTPUT_DIR	= output/
NUMBERS_DIR	= numbers/
STRINGS_DIR	= strings/
PRINTF_DIR	= ft_printf/
GNL_DIR		= get_next_line/

# compiler
CFLAGS = -Wall -Wextra -Werror
INCLUDES = $(INC_DIR)

# files
SRC := $(wildcard $(SRC_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(CHAR_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(NUMBERS_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MATH_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(OUTPUT_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(LIST_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MEMORY_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(PRINTF_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(STRINGS_DIR)*.c)
SRC += $(wildcard $(SRC_DIR)$(MATRIX_DIR)*.c)
OBJ := $(notdir $(SRC))
OBJ := $(patsubst %, $(OBJ_DIR)%, $(OBJ:.c=.o))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "[INFO] \`libft\` Library created"

$(OBJ): $(SRC)
	@mkdir -p $(OBJ_DIR)
	@gcc -Wall -Wextra -Werror -I $(INCLUDES) -c $^
	@mv -f *.o $(OBJ_DIR)

clean:
	@/bin/rm -rf $(OBJ_DIR)
	@echo "[INFO] \`libft\` Object folder removed"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "[INFO] \`libft\` Library removed"

re: fclean all