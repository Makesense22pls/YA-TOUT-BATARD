# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mafourni <mafourni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 09:57:59 by mafourni          #+#    #+#              #
#    Updated: 2024/02/20 12:02:33 by mafourni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

RM = rm -f

SRC = ft_atoi.c ft_putnbr_fd.c ft_putchar_fd.c ft_isascii.c ft_isalpha.c \
	ft_isdigit.c ft_isprint.c  ft_strlen.c ft_strncmp.c ft_strdup.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_toupper.c ft_tolower.c ft_memcpy.c ft_memset.c ft_memmove.c \
	ft_isalnum.c ft_memcmp.c ft_memchr.c ft_strchr.c ft_substr.c ft_bzero.c \
	ft_strrchr.c ft_calloc.c ft_strlcpy.c ft_strnstr.c ft_strlcat.c ft_strjoin.c \
	ft_strtrim.c ft_split.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME):	$(OBJ)
	@$(RM) $@ 
	ar rcs $@ $(OBJ)
test:
	$(CC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all