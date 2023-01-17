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


# Store Entry
STORE_ENTRY_DIR		=	3_store_entry/
STORE_ENTRY_FILES	=	ft_store_entry.c

STORE_ENTRY			=	$(addprefix $(STORE_ENTRY_DIR), $(STORE_ENTRY_FILES))


# dbl_list
DLIST_DIR			=	dbl_list/
DLIST_FILES			=	ft_create_node.c \
						ft_find_node.c \
						ft_insert_node.c

DLIST				=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


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
						$(STORE_ENTRY) \
						$(DLIST) \
						ft_push_swap.c \
						main.c

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
all: $(NAME) #header

# header:
# 	@Headermaker srcs includes/push_swap.h -includes structs define

$(NAME): $(OBJS)
	@echo $(GREEN) "--> $(NAME) COMPILED !"$(NC)"\n"
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
