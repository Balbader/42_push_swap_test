# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/01 07:52:31 by baalbade          #+#    #+#              #
#    Updated: 2022/12/19 11:36:54 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a

INC_DIR			=	./includes/
INC_FILE		=	ft_printf.h

CHAR_DIR		=	characters/
CHAR_FILES		=	ft_print_char.c \
					ft_print_str.c
CHAR			=	$(addprefix $(CHAR_DIR), $(CHAR_FILES))

NB_DIR			=	numbers/
NB_FILES		=	ft_print_hexa.c \
					ft_print_nb.c \
					ft_print_ptr.c \
					ft_print_unsigned.c
NB				=	$(addprefix $(NB_DIR), $(NB_FILES))

SRCS_DIR		=	./srcs/
SRCS_FILES		=	$(CHAR) \
					$(NB) \
					ft_printf.c \

SRCS			=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

CC				=	cc
CFLAGS			=	-Wall -Wextra -Werror
IFLAGS			=	-I$(INC_DIR)

AR				=	ar
ARFLAGS			=	rc

RM				=	rm -rf

.SUFFIXES:			.c .o .h

OBJS			=	$(SRCS:.c=.o)

all:				$(NAME)

$(NAME):			$(OBJS)
						$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o:				%.c
						$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
						$(RM) $(OBJS)

fclean:				clean
						$(RM) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
