# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hetha <hetha@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/12 21:19:42 by hetha             #+#    #+#              #
#    Updated: 2020/05/12 21:19:51 by hetha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_strlen.c ft_atoi.c ft_memset.c ft_bzero.c ft_memccpy.c ft_memcpy.c \
		ft_memmove.c ft_memchr.c ft_memcmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_isalpha.c \
		ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
		ft_tolower.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		

FLAGS = -Wall -Wextra -Werror -c
HEADER = *.h
OBJ = *.o

all : $(NAME)

$(NAME) :	
	@gcc $(FLAGS) -I $(HEADER) $(SRCS)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean :
	@/bin/rm -f $(OBJ)

fclean : clean
	@/bin/rm -f $(NAME)

re : fclean all
