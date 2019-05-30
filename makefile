# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 14:31:49 by mfierlaf          #+#    #+#              #
#    Updated: 2019/05/30 16:38:11 by tde-brit         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = fillit.c main.c issetable.c newtab.c pos.c setmin.c tetrominos.c  \
		switchbase.c verif.c solve.c start_size.c set.c unset.c

HEADERS = fillit.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	make re -C ./libft
	gcc $(FLAGS) -o $(NAME) $(SRCS) libft/libft.a

clean:
	make clean -C ./libft

fclean: clean
	rm -f $(NAME)
	make fclean -C ./libft

re: fclean all
