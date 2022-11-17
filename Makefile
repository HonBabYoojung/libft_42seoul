# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungohki <sungohki@student.42seoul.>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:51:25 by sungohki          #+#    #+#              #
#    Updated: 2022/11/07 15:52:36 by sungohki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
ALL = $(NAME)
AR = ar
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_*.c
OBJECTS = $(SOURCES:.c=.o)
INCLUDES = ./libft.h

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) rcus $@ $<

clean : rm -rf $(OBJECTS)

fclean : clean
	rm -rf $(NAME)

re : fclean all
