# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:44:42 by jaragao-          #+#    #+#              #
#    Updated: 2022/11/29 16:09:23 by jaragao-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc
SRC = ft_printf.c ft_printhex.c ft_printptr.c ft_printunsigned.c
OBJ = $(SRC: .c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME) 

$(NAME): $(OBJ)
	make -C /libft
	cp /libft/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ) $(B_OBJ)

fclean:	clean
			$(RM) $(NAME)

re:	fclean $(NAME)          