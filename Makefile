# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 18:56:41 by ttorbeyn          #+#    #+#              #
#    Updated: 2021/04/26 18:56:43 by ttorbeyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

INCLUDE			=	-I include

LIBFT			=	@ cd libft && make ;

SRC				=				libft/libft.a \
								ft_operator.c

OBJS			=	$(SRC:.c=.o)

RM				= 	@rm -f

NAME			=	push_swap

all: 		$(NAME)

$(NAME):
			@$(LIBFT)
			@$(CC) $(CFLAGS) $(SRC) $(INCLUDE) -o $(NAME)

clean:
			@cd libft && make clean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) cub3D

re:			fclean all

.PHONY:		all clean fclean re save
