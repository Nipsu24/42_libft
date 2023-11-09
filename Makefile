# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmeier <mmeier@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 11:47:56 by mmeier            #+#    #+#              #
#    Updated: 2023/11/08 17:03:54 by mmeier           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FILES = ft_calloc.c \
		ft_isascii.c \
		ft_memchr.c \
		ft_memmove.c \
		ft_strdup.c \
		ft_strlen.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_isalnum.c \
		ft_isdigit.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_strlcat.c \
		ft_strncmp.c \
		ft_tolower.c \
		ft_bzero.c \
		ft_isalpha.c \
		ft_isprint.c \
		ft_memcpy.c \
		ft_strchr.c \
		ft_strlcpy.c \
		ft_strnstr.c \
		ft_toupper.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putnbr_fd. \
		ft_putendl_fd \
		ft_substr.c \
		ft_strjoin.c

OBJ = $(FILES:.c=.o)

FLAGS += -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all