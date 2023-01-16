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
CHECK_ENTRY_DIR		=	1_check_entry/
CHECK_ENTRY_FILES	=	ft_check_entry.c

CHECK_ENTRY			=	$(addprefix $(CHECK_ENTRY_DIR), $(CHECK_ENTRY_FILES))


# Convert Entry
CONVERT_ENTRY_DIR	=	2_convert_entry/
CONVERT_ENTRY_FILES	=	ft_convert_entry.c

CONVERT_ENTRY		=	$(addprefix $(CONVERT_ENTRY_DIR), $(CONVERT_ENTRY_FILES))


##################################
#   	    INCLUDES 			 #
##################################
INC_DIR				=	./includes/
INC_FILE			=	push_swap.h


##################################
#    	   	  SRCS 				 #
##################################
SRCS_DIR			=	./srcs/
SRCS_FILES			=	$(CHECK_ENTRY) \
						$(CONVERT_ENTRY) \
						ft_push_swap.c \
						main.c

SRCS				=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))


##################################
#   	   	  LIBFT 			 #
##################################
LIBFT_DIR			=	./libft
LIBFT_INC			=	./libft/includes/libft.h
LIBFT				=	./libft/libft.a
MAKE_LIBFT			=	make -C $(LIBFT_DIR)


##################################
#         COMPILATION 		 	 #
##################################

CC					=	gcc
CFLAGS				=	-Wall -Wextra -Werror
IFLAGS				=	-I $(INC_DIR)
ILIBFT				=	-I $(LIBFT_INC)


##################################
#              OBJS 			 #
##################################
OBJS				=	$(SRCS:.c=.o)


#################
#### DISPLAY ####
#################

RED='\033[0;31m'
GREEN='\033[1;32m'
ORANGE='\033[0;33m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color


##################################
#             RULES 			 #
##################################
all: $(NAME)

$(NAME): $(LIBFT) $(OBJS)
	@echo $(GREEN) "--> $(NAME) COMPILED !"$(NC)"\n"
	$(CC) $(CFLAGS) $(IFLAGS) $(ILIBFT) -o $(NAME) $(OBJS)

$(LIBFT):
	$(MAKE_LIBFT)

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) $(ILIBFT) -c $< -o $@

clean:
	$(MAKE_LIBFT) clean
	$(RM) $(OBJS)

fclean:
	$(MAKE_LIBFT) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
