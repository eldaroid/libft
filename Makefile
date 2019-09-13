# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/11 20:55:44 by fgracefo          #+#    #+#              #
#    Updated: 2019/09/11 21:20:28 by fgracefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = *.c

OFILE = *.o

INCLUDES = ./

all: $(NAME)

$(NAME):
		gcc -Wall -Wextra -Werror -c $(SRCS) 
		ar rc $(NAME) $(OFILE)
		ranlib $(NAME)

clean:
		rm -f $(OFILE)

fclean: clean
		rm -f $(NAME)
re: fclean all
