# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smyeni <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/27 18:15:25 by smyeni            #+#    #+#              #
#    Updated: 2017/09/05 15:51:43 by smyeni           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_isdigit.c\
	ft_toupper.c\
	ft_putnbr_fd.c\
	ft_memmove.c\
	ft_strlen.c\
	ft_memdel.c\
	ft_strlcat.c\
	ft_memset.c\
	ft_putchar.c\
	ft_strcpy.c\
	ft_strdup.c\
	ft_memalloc.c\
	ft_isalpha.c\
	ft_memccpy.c\
	ft_bzero.c\
	ft_memcpy.c\
	ft_strncpy.c\
	ft_putchar_fd.c\
	ft_strnew.c\
	ft_putendl.c\
	ft_strnstr.c\
	ft_isprint.c\
	ft_strncat.c\
	ft_strequ.c\
	ft_strrchr.c\
	ft_isalnum.c\
	ft_isascii.c\
	ft_strclr.c\
	ft_strnequ.c\
	ft_putstr.c\
	ft_strcat.c\
	ft_strstr.c\
	ft_strcmp.c\
	ft_putstr_fd.c\
	ft_putendl_fd.c\
	ft_strchr.c\
	ft_atoi.c\
	ft_putnbr.c\
	ft_tolower.c\
	ft_strncmp.c\
	ft_memcmp.c\
	ft_memchr.c\
	ft_strdel.c\
	ft_itoa.c\
	ft_striter.c\
	ft_striteri.c\
	ft_strjoin.c\
	ft_strmap.c\
	ft_strmapi.c\
	ft_strsplit.c\
	ft_strsub.c\
	ft_strtrim.c\
	ft_power.c\
	ft_strlen_char.c\
	ft_strrev.c\
	ft_itoa.c

CC = gcc -c

CFLAGS = -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(SRC)
	ar rc $(NAME) $(OBJ)

clean: 	
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean 	all
