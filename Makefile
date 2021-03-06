# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 21:19:42 by hetha             #+#    #+#              #
#    Updated: 2020/05/22 02:02:39 by hetha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= libft.a
SRCS	= ft_strlen.c ft_atoi.c ft_memset.c ft_bzero.c ft_memccpy.c \
		ft_memcpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c \
		ft_strlcat.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c \
		ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c \
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c 

HEADERS = ./
OBJ 	= $(SRCS:.c=.o)

all: $(NAME)

%.o:%c libft.h
		clang -Wall -Wextra -Werror -I $(HEADERS) -o $@ -c $< 

$(NAME): $(OBJ)	libft.h
		ar -Urcs $(NAME) $?
		ranlib $(NAME)

clean:
		/bin/rm -f $(OBJ)

fclean: clean
		/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re %.o

so: all
	@gcc -shared -o libft.so $(SRCS:.c=.o) 
