# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/04 13:52:19 by baalbade          #+#    #+#              #
#    Updated: 2023/01/04 13:52:22 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################################
#   	      NAME 				 #
##################################
NAME				=	push_swap


##################################
#    	    SRCS FILES			 #
##################################
# qsort

QSORT_DIR			=	qsort/
QSORT_FILES			=	ft_qs.c

QSORT				=	$(addprefix $(QSORT_DIR), $(QSORT_FILES))

# init_stack

INIT_STACK_DIR		=	init_stack/
INIT_STACK_FILES	=

INIT_STACK			=	$(addprefix $(INIT_STACK_DIR), $(INIT_STACK_FILES))
# operations

OPER_DIR			=	operations/
OPER_FILES			=	pa.c \
						pb.c \
						ra.c \
						rb.c \
						rra.c \
						rrb.c \
						rr.c \
						rrr.c \
						sa.c \
						sb.c \
						ss.c

OPER				=	$(addprefix $(OPER_DIR), $(OPER_FILES))


##################################
#   	    INCLUDES 			 #
##################################
INC_DIR				=	./includes/
INC_FILE			=	push_swap.h


##################################
#    	   	  SRCS 				 #
##################################
SRCS_DIR			=	./srcs/
SRCS_FILES			=	$(QSORT) \
						$(OPER) \

SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))


##################################
#   	   	  LIBFT 			 #
##################################
LIBFT_PATH			=	./libft
LIBFT_FILE			=	./libft/libft.a
MAKE_LIBFT			=	make -C $(LIBFT_PATH)



##################################
#         COMPILATION 		 	 #
##################################

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror
IFLAGS				=	-I$(INC_DIR)


##################################
#              OBJS 			 #
##################################
OBJS			=	$(SRCS:.c=.o)


##################################
#             RULES 			 #
##################################
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
