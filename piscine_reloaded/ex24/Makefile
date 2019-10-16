#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/15 18:33:39 by sadawi            #+#    #+#              #
#    Updated: 2019/10/15 18:43:57 by sadawi           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c srcs/ft_swap.c

OUTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OUTS)

clean:
	/bin/rm -f $(OUTS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all