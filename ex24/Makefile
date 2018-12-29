# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pcorlys- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/12/05 06:08:31 by pcorlys-          #+#    #+#              #
#    Updated: 2018/12/05 06:39:44 by pcorlys-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FI= ./srcs/
FILES_IN= ./includes/
NAME_FILES= $(FI)ft_putchar.c $(FI)ft_putstr.c $(FI)ft_strcmp.c \
			$(FI)ft_strlen.c $(FI)ft_swap.c
NAME_FILES_O= ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
GCC= gcc -Wall -Wextra -Werror -c -I 

all:
	$(GCC) $(FILES_IN) $(NAME_FILES)  
	ar rc libft.a $(NAME_FILES_O) 

clean:
	rm -rf $(NAME_FILES_O)

fclean: clean
	rm -rf libft.a

re: fclean all
