# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoccia <ccoccia@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 13:21:28 by ccoccia           #+#    #+#              #
#    Updated: 2023/11/13 13:39:33 by ccoccia          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS += -Wall -Wextra -Werror -Iinclude
AR = ar

NAME = libftprintf.a

HEADER = Include/ft_printf.h
LIBFT_HEADER = Include/libft.h

SRC_LIBFT=      	libft/ft_atoi.c \
			libft/ft_bzero.c \
			libft/ft_calloc.c \
			libft/ft_isalnum.c \
			libft/ft_isalpha.c \
			libft/ft_isascii.c \
			libft/ft_isdigit.c \
			libft/ft_isprint.c \
			libft/ft_itoa.c \
			libft/ft_memchr.c \
			libft/ft_memcmp.c \
			libft/ft_memcpy.c \
			libft/ft_memmove.c \
			libft/ft_memset.c \
			libft/ft_putchar_fd.c \
			libft/ft_putendl_fd.c \
			libft/ft_putnbr_fd.c \
			libft/ft_putstr_fd.c \
			libft/ft_split.c \
			libft/ft_strchr.c \
			libft/ft_strdup.c \
			libft/ft_strjoin.c \
			libft/ft_strlcat.c \
			libft/ft_strlcpy.c \
			libft/ft_strlen.c \
			libft/ft_strmapi.c \
			libft/ft_strncmp.c \
			libft/ft_strnstr.c \
			libft/ft_strrchr.c \
			libft/ft_strtrim.c \
			libft/ft_substr.c \
			libft/ft_tolower.c \
			libft/ft_toupper.c \

SRC              =       ft_common.c ft_printptr.c ft_printhex.c ft_unsigned.c ft_printf.c

DEF_COLOR = \033[0;39m
GREEN = \033[0;92m
RED = \033[0;91m
BLUE = \033[0;94m

OBJS = $(SRC:.c=.o)
OBJS_LIBFT = $(SRC_LIBFT:.c=.o)

all: $(NAME)

$(NAME): comp libft $(OBJS) $(HEADER) $(LIBFT_HEADER)
	$(AR) -rcs $(NAME) $(OBJS)
	@echo "$(GREEN)ft_print compiled$(DEF_COLOR)"

comp:
	@echo "$(BLUE)compiling...$(DEF_COLOR)"

libft:  $(OBJS_LIBFT) $(LIBFT_HEADER)
	$(AR) -rcs $(NAME) $(OBJS_LIBFT)

.o:.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)
	rm -f $(OBJS_LIBFT)
	@echo "$(RED)object files cleaned$(DEF_COLOR)"

fclean: clean
	rm -rf $(NAME)
	@echo "$(RED)executable files cleaned$(DEF_COLOR)"

re: fclean all
	@echo "$(BLUE)cleaned and rebuilt everything$(DEF_COLOR)"

.PHONY: all clean fclean re libft

