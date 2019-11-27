#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sadawi <sadawi@student.hive.fi>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/16 12:10:11 by sadawi            #+#    #+#              #
<<<<<<< HEAD
#    Updated: 2019/11/27 17:20:43 by sadawi           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME=fillit
SRCS=srcs/main.c srcs/board_ft.c srcs/check_ft.c srcs/collision_ft.c \
srcs/display_ft.c srcs/get_info_ft.c srcs/shifting_ft.c srcs/solve_ft.c \
srcs/store_block_ft.c srcs/ordination_ft.c srcs/free_ft.c
OBJS=*.o
FLAGS=-Wall -Wextra -Werror
RUN_LIB=make -C libft/ fclean && make -C libft/
=======
#    Updated: 2019/10/16 14:45:39 by sadawi           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fillit

SRCS = *.c
>>>>>>> c85e33d79723ccc0e4c2fb22e8ee50d07a1c789e

all: $(NAME)

$(NAME):
<<<<<<< HEAD
	@$(RUN_LIB)
	gcc $(FLAGS) -c $(SRCS)
	gcc $(FLAGS) -o $(NAME) $(OBJS) libft/libft.a

clean:
	/bin/rm -f $(OBJS)
	make -C libft/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libft/ fclean
=======
	gcc -o $(NAME) $(SRCS) -Wall -Werror -Wextra

clean:
	/bin/rm -f $(OUTS)

fclean: clean
	/bin/rm -f $(NAME)
>>>>>>> c85e33d79723ccc0e4c2fb22e8ee50d07a1c789e

re: fclean all
