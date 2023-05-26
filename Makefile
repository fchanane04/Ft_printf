# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/29 20:58:08 by fchanane          #+#    #+#              #
#    Updated: 2021/12/01 20:22:34 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADERS	= ft_printf.h

NAME	=	libftprintf.a

CFLAGS	= -Wall -Werror -Wextra

RM		=	rm -rf

SRC = 	ft_printf.c\
      	ft_putchar.c\
      	ft_putnbr.c\
    	ft_putstr.c\
        ft_put_hexa.c\
     	ft_put_ung_nbr.c\
		ft_putadd.c\

OBJ = $(SRC:.c=.o)

AR  = ar -rc

all: $(NAME)

$(NAME): $(OBJ) $(HEADERS)
	@$(AR) $(NAME) $(OBJ)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
