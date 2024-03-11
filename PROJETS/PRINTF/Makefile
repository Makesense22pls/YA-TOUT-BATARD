# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 17:08:47 by mafourni          #+#    #+#              #
#    Updated: 2024/03/05 17:13:50 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

RM = rm -f
SRC = ft_printf.c src/ft_print_char.c src/ft_print_char.c src/ft_print_format.c \
		src/ft_print_hexmaj.c src/ft_print_hexmin.c src/ft_print_nbr.c \
		src/ft_print_str.c src/ft_print_ptr.c src/ft_print_nbru.c
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