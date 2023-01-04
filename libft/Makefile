# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:33:38 by baalbade          #+#    #+#              #
#    Updated: 2022/12/13 11:45:51 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
IFLAGS		=	-I$(INC_PATH)

AR			=	ar
ARFLAGS		=	rc

RM			=	rm -rf

INC_PATH	=	.
INC_NAME	=	libft.h

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_islower.c ft_isprint.c \
				ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
				ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putstr_fd.c \
				ft_putnbr_fd.c ft_split.c ft_strchr.c ft_strcpy.c ft_strdup.c \
				ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
				ft_isupper.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strncpy.c ft_strndup.c ft_strnjoin.c ft_strnstr.c \
				ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRCS_BONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
				ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
				ft_lstnew.c ft_lstsize.c

.SUFFIXES:		.c .o .h

OBJS		=	$(SRCS:.c=.o)
OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

all:			$(NAME)

$(NAME):		$(OBJS)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o:			%.c
					$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

bonus:			$(OBJS_BONUS) $(OBJS)
					$(AR) $(ARFLAGS) $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
					$(RM) $(OBJS) $(OBJS_BONUS)

fclean:			clean
					$(RM) $(NAME)

re:				fclean all

.PHONY:			all bonus clean fclean re