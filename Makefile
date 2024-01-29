# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 14:11:16 by mafourni          #+#    #+#              #
#    Updated: 2024/01/29 18:06:00 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror -o

RM = rm -rf

SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c

OBJ = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(NAME) $(SRCS)

make: all
	

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) $(NAME)

re: fclean all
