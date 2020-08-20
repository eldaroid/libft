# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fgracefo <fgracefo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/22 15:12:37 by eldaroid          #+#    #+#              #
#    Updated: 2020/08/20 10:44:29 by fgracefo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memchr.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memcmp.c \
		ft_strlen.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_strncpy.c \
		ft_strcat.c \
		ft_strncat.c \
		ft_strlcat.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strstr.c \
		ft_strnstr.c \
		ft_strcmp.c \
		ft_strncmp.c \
		ft_atoi.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memalloc.c \
		ft_memdel.c \
		ft_strnew.c \
		ft_strdel.c \
		ft_strclr.c \
		ft_striter.c \
		ft_striteri.c \
		ft_strmap.c \
		ft_strmapi.c \
		ft_strequ.c \
		ft_strnequ.c \
		ft_strsub.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strsplit.c \
		ft_itoa.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_lstnew.c \
		ft_lstdelone.c \
		ft_lstdel.c \
		ft_lstadd.c \
		ft_lstiter.c \
		ft_lstmap.c \
		ft_count_letter.c\
		ft_count_words.c \
		ft_isspace.c \
		ft_islower.c \
		ft_isupper.c \

CC = gcc
FLAGS = -Wall -Wextra -Werror

INCLUDES = -I $(HEADERS_DIR)
HEADERS_LIST = libft.h
HEADERS_DIR = header/

HEADERS = $(addprefix $(HEADERS_DIR), $(HEADERS_LIST))

SOURCES_DIR = src/

SOURCES = $(addprefix $(SOURCES_DIR), $(SRC))



OBJECTS_LIST = $(patsubst %.c, %.o, $(SRC))
OBJECTS_DIR = objects/
OBJECTS = $(addprefix $(OBJECTS_DIR), $(OBJECTS_LIST))
	
all: $(NAME)

$(NAME): $(OBJECTS_DIR) $(OBJECTS)
	@ar rc $@ $(OBJECTS)
	@ranlib $@
	@echo "\n$(NAME):object files were created"

$(OBJECTS_DIR):
	@mkdir -p $(OBJECTS_DIR)
	@echo "$(NAME): $(OBJECTS_DIR) was created"

$(OBJECTS_DIR)%.o : $(SOURCES_DIR)%.c $(HEADERS)
	@$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

clean:
	@rm -rf $(OBJECTS_DIR)
	@echo "$(NAME):object files were deleted"
	@rm -rf $(OBJECTS_DIR_P)
	@echo "$(NAME_P): object files were deleted"

fclean: clean
	@rm -f $(LIBFT)
	@echo "libft.a: $(LIBFT) was deleted"
	@rm -f $(NAME)
	@echo "$(NAME):was deleted"
re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: all clean fclean re