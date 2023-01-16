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
NAME				=	ft_push_swap


##################################
#   	   	  LIBFT 			 #
##################################
LIBFT_PATH			=	./libft
LIBFT_FILE			=	./libft/libft.a
MAKE_LIBFT			=	make -C $(LIBFT_PATH)


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

CONVERT_ENTRY		=	$(addprefix $(CONVERT_ENTRY_DIR), $(CONVERT_ENTRY_FILES))


##################################
#   	    INCLUDES 			 #
##################################
INC_DIR				=	./includes/
INC_FILE			=	ft_push_swap.h


##################################
#    	   	  SRCS 				 #
##################################
SRCS_DIR			=	./srcs/
SRCS_FILES			=	$(CHECK_ENTRY) \
						$(CONVERT_ENTRY) \
						ft_push_swap.c

SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))


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
