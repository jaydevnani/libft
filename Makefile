# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdevnani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/25 23:53:08 by jdevnani          #+#    #+#              #
#    Updated: 2018/06/28 02:12:00 by jdevnani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CFLAGS	= -Wall -Werror -Wextra
FILES	= Lib C Functions/ft_atoi.c	\
		  Lib C Functions/ft_bzero.c \
		  Extra Functions/ft_nodigits.c \
		  Extra Functions/ft_countwords.c \
		  Lib C Functions/ft_isalnum.c \
		  Lib C Functions/ft_isalpha.c \
		  Lib C Functions/ft_isascii.c \
		  Lib C Functions/ft_isdigit.c \
		  Lib C Functions/ft_memcpy.c \
		  Extra Functions/ft_isupper.c \
		  Extra Functions/ft_islower.c \
		  Additional Functions/ft_putendl_fd.c \
		  Additional Functions/ft_strclr.c \
		  Additional Functions/ft_striteri.c \
		  Lib C Functions/ft_strncat.c \
		  Additional Functions/ft_strsplit.c \
		  Lib C Functions/ft_isprint.c \
		  Additional Functions/ft_memdel.c \
		  Additional Functions/ft_putnbr.c \
		  Lib C Functions/ft_strcmp.c \
		  Additional Functions/ft_strjoin.c \
		  Extra Functions/ft_lstrev.c \
		  Lib C Functions/ft_strncmp.c \
		  Lib C Functions/ft_strstr.c \
		  Additional Functions/ft_itoa.c \
		  Lib C Functions/ft_memmove.c \
		  Additional Functions/ft_putnbr_fd.c \
		  Lib C Functions/ft_strcpy.c \
		  Lib C Functions/ft_strlcat.c \
		  Lib C Functions/ft_strncpy.c \
		  Additional Functions/ft_strsub.c \
		  Additional Functions/ft_memalloc.c \
		  Lib C Functions/ft_memset.c \
		  Additional Functions/ft_putstr.c \
		  Additional Functions/ft_strdel.c \
		  Lib C Functions/ft_strlen.c \
		  Additional Functions/ft_strnequ.c \
		  Additional Functions/ft_strtrim.c \
		  Lib C Functions/ft_memccpy.c \
		  Additional Functions/ft_putchar.c \
		  Additional Functions/ft_putstr_fd.c \
		  Lib C Functions/ft_strdup.c \
		  Additional Functions/ft_strnew.c \
		  Lib C Functions/ft_tolower.c \
		  Lib C Functions/ft_memchr.c \
		  Additional Functions/ft_putchar_fd.c \
		  Lib C Functions/ft_strcat.c \
		  Additional Functions/ft_strequ.c \
		  Additional Functions/ft_strmap.c \
		  Lib C Functions/ft_strnstr.c \
		  Lib C Functions/ft_toupper.c \
		  Lib C Functions/ft_memcmp.c \
		  Additional Functions/ft_putendl.c \
		  Lib C Functions/ft_strchr.c \
		  Additional Functions/ft_striter.c \
		  Additional Functions/ft_strmapi.c \
		  Lib C Functions/ft_strrchr.c \
		  Extra Functions/ft_wordlen.c \
		  Bonus Functions/ft_lstnew.c \
		  Bonus Functions/ft_lstdelone.c \
		  Bonus Functions/ft_lstdel.c \
		  Bonus Functions/ft_lstadd.c \
		  Bonus Functions/ft_lstiter.c \
		  Bonus Functions/ft_lstmap.c
OBJ		= $(FILES:%.c=%.o)

all : $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
$(OBJ): $(FILES)
		gcc -c $(CFLAGS) $(FILES)

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
