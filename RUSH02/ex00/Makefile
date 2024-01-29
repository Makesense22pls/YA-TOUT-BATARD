# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/28 14:11:16 by mafourni          #+#    #+#              #
#    Updated: 2024/01/28 14:31:19 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-02

CC = cc -Wall -Werror -Wextra -o

RM = rm -rf

FILES = check_arg.c main.c number_convert.c read_dict.c utils.c 

all: $(NAME)

$(NAME): $(FILES)
	$(CC) $(NAME) $(FILES)

clean:
	$(RM)

fclean:
	$(RM) $(NAME)

re: fclean all