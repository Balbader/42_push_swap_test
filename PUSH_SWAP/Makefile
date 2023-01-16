# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/16 13:51:00 by baalbade          #+#    #+#              #
#    Updated: 2023/01/16 13:51:02 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

##################################
#   	      NAME 				 #
##################################
NAME				=	push_swap


##################################
#    	    SRCS FILES			 #
##################################
# Check Entry
CHECK_ENTRY_DIR		=	1_check_cntry/
CHECK_ENTRY_FILES	=	ft_check_entry.c

CHECK_ENTRY			=	$(addprefix $(CHECK_ENTRY_DIR), $(CHECK_ERR_FILES))

# Convert Entry
CONVERT_ENTRY_DIR	=	2_convert_entry/
CONVERT_ENTRY_FILES	=	ft_convert_entry.c

# error_handling
CHECK_ERR_DIR		=	error_handling/
CHECK_ERR_FILES		=	ft_check_errors.c \
						ft_check_main_arg.c

CHECK_ERR			=	$(addprefix $(CHECK_ERR_DIR), $(CHECK_ERR_FILES))


# init_stack
INIT_STACK_DIR		=	init_stack/
INIT_STACK_FILES	=	ft_get_entry.c \
						ft_init_stack_a.c 

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


# dbl_list : add or not???


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
						$(CHECK_ERR) \
						$(INIT_STACK) \
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
IFLAGS				=	-I $(INC_DIR)


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
	$(CC) $(CFLAGS) -c push_swap.c -o push_swap

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
