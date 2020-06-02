# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcaptain <mcaptain@msk-school21.ru>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/01 23:16:28 by mcaptain          #+#    #+#              #
#    Updated: 2020/05/19 17:25:29 by mcaptain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = 	ft_atoi.c 			\
 		ft_bzero.c 			\
 		ft_calloc.c 		\
 		ft_isalnum.c 		\
 		ft_isalpha.c 		\
 		ft_isascii.c 		\
 		ft_isdigit.c 		\
 		ft_isprint.c 		\
 		ft_itoa.c 			\
 		ft_ltoa_base.c 		\
 		ft_memccpy.c 		\
 		ft_memchr.c 		\
 		ft_memcmp.c 		\
 		ft_memcpy.c 		\
 		ft_memmove.c 		\
 		ft_memset.c 		\
 		ft_putchar_fd.c 	\
 		ft_putendl_fd.c 	\
 		ft_putnbr_fd.c 		\
 		ft_putstr_fd.c	 	\
 		ft_split.c 			\
 		ft_strchr.c 		\
 		ft_strncmp.c 		\
 		ft_strdup.c 		\
 		ft_strjoin.c 		\
 		ft_strlcat.c 		\
 		ft_strlcpy.c 		\
 		ft_strlen.c 		\
 		ft_strmapi.c 		\
 		ft_strnstr.c 		\
 		ft_strrchr.c 		\
 		ft_strtrim.c 		\
 		ft_substr.c 		\
 		ft_tolower.c 		\
 		ft_toupper.c 		\

BNS =  	ft_lstadd_back.c	\
 		ft_lstadd_front.c	\
 		ft_lstclear.c		\
 		ft_lstdelone.c 		\
 		ft_lstiter.c 		\
 		ft_lstlast.c 		\
 		ft_lstmap.c 		\
 		ft_lstnew.c 		\
 		ft_lstsize.c 

OBJS = $(SRC:.c=.o)
BNS_OBJS = $(BNS:.c=.o)

HDRS = libft.h

all: $(NAME) 

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean:
	rm -f $(OBJS)
	rm -f $(BNS_OBJS)

%.o: %.c $(HDRS)
	gcc -c -Wall -Wextra -Werror -c $< -o $@

fclean: clean
	rm -f $(NAME)

bonus: $(OBJS) $(BNS_OBJS) 
	ar rc $(NAME) $(OBJS) $(BNS_OBJS)
	ranlib $(NAME)

re: fclean all
