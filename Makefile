# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/26 18:56:41 by ttorbeyn          #+#    #+#              #
#    Updated: 2021/12/30 20:22:25 by hubert           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

INCLUDE			=	-I include

#LIBFT			=	@ cd libft && make ;

SRC				=	main.c \
					ft_operator_1.c \
					ft_operator_2.c \
					ft_operator_3.c \
					ft_parsing.c \
					ft_utils.c \
					./libft_modif/ft_atoi.c \
					./libft_modif/ft_lstadd_back.c \
					./libft_modif/ft_lstnew.c \
					./libft_modif/ft_lstlast.c
#					libft_modif/ft_lstadd_front.c \
#					libft_modif/ft_lstclear.c \
#					libft_modif/ft_lstdelone.c \
#					libft_modif/ft_lstiter.c \
#					libft_modif/ft_lstlast.c \
#					libft_modif/ft_lstmap.c \
#					libft_modif/ft_lstsize.c

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
