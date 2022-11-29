# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaragao- <jaragao-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/29 15:44:42 by jaragao-          #+#    #+#              #
#    Updated: 2022/11/29 16:37:00 by jaragao-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft
CC = cc
SRC = ft_printf.c ft_printhex.c ft_printptr.c ft_printunsigned.c
OBJ = $(SRC: .c=.o)
CFLAGS = -Wall -Werror -Wextra
RM = rm -f

all: $(NAME) 

$(NAME): $(OBJ)
	make -C $(LIBFT)
	cp $()/libft.a ./$(NAME)
	ar rcs $(NAME) $(OBJ)

clean:
			$(RM) $(OBJ)
			make clean -C $(LIBFT)

fclean:	clean
			$(RM) $(NAME)
			make fclean -C $(LIBFT)

re:	fclean $(NAME)          