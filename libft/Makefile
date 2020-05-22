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

NAME = libft.a
SRCS = SRCS/ft_strlen.c \
		SRCS/ft_atoi.c \
		SRCS/ft_memset.c \
		SRCS/ft_bzero.c \
		SRCS/ft_memccpy.c \
		SRCS/ft_memcpy.c \
		SRCS/ft_memmove.c \
		SRCS/ft_memchr.c \
		SRCS/ft_memcmp.c \
		SRCS/ft_strlcpy.c \
		SRCS/ft_strlcat.c \
		SRCS/ft_strchr.c \
		SRCS/ft_strrchr.c \
		SRCS/ft_strnstr.c \
		SRCS/ft_strncmp.c \
		SRCS/ft_isalpha.c \
		SRCS/ft_isdigit.c \
		SRCS/ft_isalnum.c \
		SRCS/ft_isascii.c \
		SRCS/ft_isprint.c \
		SRCS/ft_toupper.c \
		SRCS/ft_tolower.c \
		SRCS/ft_calloc.c \
		SRCS/ft_strdup.c \
		SRCS/ft_substr.c \
		SRCS/ft_strjoin.c \
		SRCS/ft_strtrim.c \
		SRCS/ft_split.c \
		SRCS/ft_itoa.c \
		SRCS/ft_strmapi.c \
		SRCS/ft_putchar_fd.c \
		SRCS/ft_putstr_fd.c \
		SRCS/ft_putendl_fd.c \
		SRCS/ft_putnbr_fd.c

FLAGS = -Wall -Wextra -Werror -c
HEADERS = ./includes
OBJ = *.o

all : $(NAME)

$(NAME) :	
	@gcc $(FLAGS) -I $(HEADERS) $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
