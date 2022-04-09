# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/09 13:46:03 by ttorbeyn          #+#    #+#              #
#    Updated: 2022/04/09 13:46:08 by ttorbeyn         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

INCLUDE			=	-I include

SRC				=	./src/ft_push_swap.c \
					./src/ft_operator_1.c \
					./src/ft_operator_2.c \
					./src/ft_operator_3.c \
					./src/ft_parsing.c \
					./src/ft_utils.c \
					./src/ft_free.c \
					./src/ft_sort_small.c \
					./src/ft_sort_medium.c \
					./src/ft_tab.c \
					./libft/ft_atoi.c \
					./libft/ft_split.c \
					./libft/ft_lstnew.c \
					./libft/ft_lstsize.c \
					./libft/ft_lstlast.c \
					./libft/ft_lstadd_back.c \
					./libft/ft_lstbeforelast.c

OBJS			=	$(SRC:.c=.o)

RM				= 	@rm -f

NAME			=	push_swap

all: 		$(NAME)

$(NAME):
#			@$(LIBFT)
			@$(CC) $(CFLAGS) $(SRC) $(INCLUDE) -o $(NAME)

clean:
#			@cd libft && make clean
			$(RM) $(OBJS)

fclean:		clean
			$(RM) push_swap

re:			fclean all

.PHONY:		all clean fclean re save
