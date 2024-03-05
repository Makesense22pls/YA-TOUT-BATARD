# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 09:57:59 by mafourni          #+#    #+#              #
#    Updated: 2024/03/04 17:54:22 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

RM = rm -f
SRC = printf.c src.c
OBJ = $(SRC:.c=.o)

LIBFT_DIR = libft
LIBFT_LIB = $(LIBFT_DIR)/libft.a
 

all : $(LIBFT_LIB) $(NAME) 

$(LIBFT_LIB):
	@make -C $(LIBFT_DIR)

%.o: %.c
	cc -Wall -Werror -Wextra -c $< -o $@ -I.

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

clean:
	$(RM) $(OBJ)
	@make clean -C $(LIBFT_DIR) 

fclean: clean
	$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean 
	
re: fclean all