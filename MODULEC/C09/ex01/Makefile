# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 14:11:16 by mafourni          #+#    #+#              #
#    Updated: 2024/01/29 17:25:38 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc -Wall -Wextra -Werror -o

RM = rm -rf

FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

OBJ = $(FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(NAME) $(FILES)

make: all
	

clean:
	$(RM)

fclean:
	$(RM) $(NAME)

re: fclean make all
