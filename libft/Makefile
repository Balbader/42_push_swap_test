# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:33:38 by baalbade          #+#    #+#              #
#    Updated: 2022/12/08 16:33:42 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################################
#   	      NAME 				 #
##################################
NAME			=	libft.a


##################################
#    	    SRCS FILES			 #
##################################
# ctype
CTYPE_DIR		=	ctype/
CTYPE_FILES		=	ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_islower.c \
					ft_isupper.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_isprint.c

CTYPE			=	$(addprefix $(CTYPE_DIR), $(CTYPE_FILES))


# dlist
DLIST_DIR		=	dlist/
DLIST_FILES		=	ft_dlist_add_back.c \
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

DLIST			=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


# ft_printf
FT_PRINTF_DIR	=	ft_printf/
FT_PRINTF_FILES	=	ft_print_char.c \
					ft_printf.c \
					ft_print_hexa.c \
					ft_print_nb.c \
					ft_print_ptr.c \
					ft_print_str.c \
					ft_print_unsigned.c

FT_PRINTF		=	$(addprefix $(FT_PRINTF_DIR), $(FT_PRINTF_FILES))


# llist
LLIST_DIR		=	llist/
LLIST_FILES		=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c

LLIST			=	$(addprefix $(LLIST_DIR), $(LLIST_FILES))


# memory
MEMORY_DIR		=	memory/
MEMORY_FILES	=	ft_bzero.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_memcpy.c \
					ft_memmove.c \
					ft_memset.c

MEMORY			=	$(addprefix $(MEMORY_DIR), $(MEMORY_FILES))


# output
OUTPUT_DIR		=	output/
OUTPUT_FILES	=	ft_putchar_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c \
					ft_putstr_fd.c

OUTPUT			=	$(addprefix $(OUTPUT_DIR), $(OUTPUT_FILES))


# stdlib
STDLIB_DIR		=	stdlib/
STDLIB_FILES	=	ft_atoi.c \
					ft_calloc.c \
					ft_itoa.c

STDLIB			=	$(addprefix $(STDLIB_DIR), $(STDLIB_FILES))


# string
STRING_DIR		=	string/
STRING_FILES	=	ft_split.c \
					ft_strchr.c \
					ft_strcpy.c \
					ft_strdup.c \
					ft_striteri.c \
					ft_strjoin.c \
					ft_strlcat.c \
					ft_strlcpy.c \
					ft_strlen.c \
					ft_strmapi.c \
					ft_strncmp.c \
					ft_strncpy.c \
					ft_strndup.c \
					ft_strnjoin.c \
					ft_strnstr.c \
					ft_strrchr.c \
					ft_strtrim.c \
					ft_substr.c

STRING			=	$(addprefix $(STRING_DIR), $(STRING_FILES))


##################################
#    	   	  SRCS 				 #
##################################
SRCS_DIR		=	./srcs/
SRCS_FILES		=	$(CTYPE) \
					$(DLIST) \
					$(FT_PRINTF) \
					$(LLIST) \
					$(MEMORY) \
					$(OUTPUT) \
					$(STDLIB) \
					$(STRING)

SRCS			=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))


##################################
#   	    INCLUDES 			 #
##################################
INC_DIR			=	./includes/
INC_FILE		=	libft.h


##################################
#         COMPILATION 		 	 #
##################################
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror
IFLAGS			=	-I$(INC_DIR)


##################################
#           LIBRARY 			 #
##################################
# creating the library
AR				=	ar
# at the root of the repository
ARFLAGS			=	rc
# remove recursively with force ##
RM				=	rm -rf


##################################
#              OBJS 			 #
##################################
OBJS			=	$(SRCS:.c=.o)


##################################
#             RULES 			 #
##################################
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
