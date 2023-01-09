# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/07 16:58:46 by baalbade          #+#    #+#              #
#    Updated: 2022/11/07 16:58:49 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
IFLAGS			=	-I$(INC_PATH)

AR				=	ar
ARFLAGS			=	rc

RM				=	rm -rf

INC_PATH		=	.
INC_NAME		=	libft.h

SRC_PATH		=	.
SRC_NAME		=	ft_isalpha.c \
					ft_isdigit.c \
					ft_isalnum.c \
					ft_isascii.c \
					ft_isprint.c \
					ft_toupper.c \
					ft_tolower.c \
					ft_bzero.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c \
					ft_calloc.c \
					ft_strlen.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strnstr.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strncmp.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_atoi.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_striteri.c \
					ft_lstnew.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstsize.c \
					ft_lstadd_front.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_dlist_add_back.c \
					ft_dlist_add_front.c \
					ft_dlist_clear.c \
					ft_dlist_create.c \
					ft_dlist_find.c \
					ft_dlist_foreach.c \
					ft_dlist_is_asc_sorted.c \
					ft_dlist_pop_back.c \
					ft_dlist_pop.c \
					ft_dlist_push.c \
					ft_dlist_rev_rotate.c \
					ft_dlist_rotate.c \
					ft_dlist_swap.c

INC			=	$(addprefix $(INC_PATH)/, $(INC_NAME))
SRC			=	$(addprefix $(SRC_PATH)/, $(SRC_NAME))

.SUFFIXES:		.c .o .h

OBJ			=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) $(INC)
				$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o:		%.c
				$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
				$(RM) $(OBJ) $(OBJ_BONUS)

fclean:		clean
				$(RM) $(NAME)

re:			fclean all

.PHONY:		all bonus clean fclean re
