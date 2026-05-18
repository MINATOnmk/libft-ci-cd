# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mboulagh <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 23:44:23 by mboulagh          #+#    #+#              #
#    Updated: 2024/11/17 17:46:13 by mboulagh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR = ar rc
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
      ft_isascii.c ft_isprint.c ft_toupper.c \
      ft_tolower.c ft_strlen.c ft_strchr.c \
      ft_strrchr.c ft_strlcpy.c ft_strlcat.c \
      ft_strncmp.c ft_strnstr.c ft_memset.c \
      ft_bzero.c ft_memcpy.c ft_memmove.c \
      ft_memchr.c ft_memcmp.c ft_atoi.c \
      ft_calloc.c ft_strdup.c ft_substr.c \
      ft_strjoin.c ft_strtrim.c ft_split.c \
      ft_itoa.c ft_strmapi.c ft_striteri.c \
      ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
      ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
        ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
        ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ = $(SRC:.c=.o)
OBB = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)

bonus: $(OBB)

%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	rm -f $(OBJ) $(OBB)

fclean: clean
	rm -f $(NAME)

re: clean all
