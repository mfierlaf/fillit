# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfierlaf <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/23 14:31:49 by mfierlaf          #+#    #+#              #
#    Updated: 2018/11/23 14:40:43 by mfierlaf         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = fillit.c main.c issetable.c newtab.c pos.c setmin.c tetrominos.c  \
		switchbase.c verif.c

HEADERS = fillit.h

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -o $(NAME) $(SRCS) libft/libft.a

clean:
	rm -f $(OBJETS)

fclean: clean
	rm -f $(NAME)

re: fclean all
