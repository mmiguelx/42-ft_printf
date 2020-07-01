# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpernia- <mpernia-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/05 03:04:13 by mpernia-          #+#    #+#              #
#    Updated: 2020/01/08 18:41:05 by mpernia-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
NAMEB		=	libftprintf_bonus.a
SRCS		=	ft_printf.c 		\
				printf_utils.c		\
				handlesimplecase.c	\
				handleint.c			\
				list_functions.c	\
				printf_utils2.c		\
				handlehex.c
SRCSB		=	ft_printf_bonus.c 			\
				printf_utils_bonus.c		\
				handlesimplecase_bonus.c	\
				handleint_bonus.c			\
				list_functions_bonus.c		\
				printf_utils2_bonus.c		\
				handlehex_bonus.c
CC			=	gcc
FLAGS		=	-c -Wall -Wextra -Werror
LIB			=	ar rc
RLIB		=	ranlib
OBJS		=	$(SRCS:.c=.o)
OBJSB		=	$(SRCSB:.c=.o)
LIBFT_DIR	=	libft/
LIBFT		=	libft.a

all: $(NAME)

$(NAME):
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT) .
	@mv $(LIBFT) $(NAME)
	@echo "Reading ft_printf sources..."
	@$(CC) $(FLAGS) $(SRCS)
	@echo "Building ft_printf objects..."
	@$(LIB) $(NAME) $(OBJS)
	@echo "Compiling ft_printf..."
	@$(RLIB) $(NAME)

.PHONY: all clean fclean

clean:
	@make -C $(LIBFT_DIR) clean
	@echo "Cleaning ft_printf objects..."
	@rm -f $(OBJS) $(OBJSB)

fclean: clean
	@make -C $(LIBFT_DIR) fclean
	@echo "Cleaning libftprintf.a"
	@rm -f $(NAME) $(NAMEB)

re: fclean all

bonus:
	@make -C $(LIBFT_DIR)
	@cp $(LIBFT_DIR)$(LIBFT) .
	@mv $(LIBFT) $(NAMEB)
	@echo "Reading ft_printf sources..."
	@$(CC) $(FLAGS) $(SRCSB)
	@echo "Building ft_printf objects..."
	@$(LIB) $(NAMEB) $(OBJSB)
	@echo "Compiling ft_printf..."
	@$(RLIB) $(NAMEB)
