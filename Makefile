# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sungohki <sungohki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 15:51:25 by sungohki          #+#    #+#              #
#    Updated: 2022/11/30 16:07:54 by sungohki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
ALL = $(NAME)
AR = ar
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SOURCES = ft_atoi.c
#SOURCES = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_i*.c ./ft_mem*.c
#	./ft_put*.c ./ft_s*.c ./ft_to*.c
SOURCES_BONUS = ./ft_lst*.c
OBJECTS = $(SOURCES:.c=.o)
OBJECTS_BONUS = $(OBJECTS) $(SOURCES_BONUS:.c=.o)
INCLUDES = ./libft.h

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

all : $(OBJECTS)
	$(AR) rcus $(NAME) $^
	rm -f bonus
	touch all

bonus : $(OBJECTS_BONUS)
	$(AR) rcus $(NAME) $^
	rm -f all
	touch bonus

clean : rm -rf $(OBJECTS)

fclean : clean
	rm -rf all

re : fclean all

.PHONY : all bonus clean fclena re