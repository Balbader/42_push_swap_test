# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/17 11:40:00 by baalbade          #+#    #+#              #
#    Updated: 2023/02/17 11:40:01 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

############
#   NAME   #
############
NAME				:=	push_swap

##################
#   SRCS FILES	 #
##################
# Entry
ENTRY_DIR			:=	entry/
ENTRY_FILES			:=	\
						ft_check_entry.c \
						ft_convert_entry.c \
						ft_get_entry.c \
						ft_look_for_doubles.c
ENTRY				:=	$(addprefix $(ENTRY_DIR), $(ENTRY_FILES))

# Actions
ACTIONS_DIR			:=	actions/
ACTIONS_FILES		:=	\
						ft_push_node.c \
						ft_reverse_rotate_stack.c \
						ft_rotate_stack.c \
						ft_swap_stack.c
ACTIONS				:=	$(addprefix $(ACTIONS_DIR), $(ACTIONS_FILES))

# Operations
OPER_DIR			:=	operations/
OPER_FILES			:=	\
						ft_pa.c ft_pb.c \
						ft_ra.c ft_rb.c ft_rr.c \
						ft_rra.c ft_rrb.c ft_rrr.c \
						ft_sa.c ft_sb.c ft_ss.c
OPER				:=	$(addprefix $(OPER_DIR), $(OPER_FILES))

# Sorting
SORTING_DIR			:=	sorting/
SORTING_FILES		:=	\
						ft_init_arr_3.c \
						ft_pre_sort_stack.c \
						ft_sort_3.c \
						ft_sort_4.c \
						ft_sort_5.c \
						ft_finish_sorting.c \
						ft_start_sorting.c
SORTING				:=	$(addprefix $(SORTING_DIR), $(SORTING_FILES))

# Stack
STACK_DIR			:=	stack/
STACK_FILES			:=	\
						ft_add_new_head.c \
						ft_add_new_tail.c \
						ft_create_node.c \
						ft_def_stack_case.c \
						ft_find_smallest_node_pos.c \
						ft_find_biggest_node_pos.c \
						ft_push_smallest_node_4.c \
						ft_push_smallest_node_5.c \
						ft_get_before_last_node.c \
						ft_find_mid_node.c \
						ft_get_last_node.c \
						ft_is_biggest_node.c \
						ft_free_stack.c \
						ft_get_stack_size.c \
						ft_init_rand_stack.c \
						ft_init_stack_a.c \
						ft_re_init_index.c \
						ft_split_stack.c \
						ft_stack_is_sorted.c
STACK				:=	$(addprefix $(STACK_DIR), $(STACK_FILES))

# Utils
UTILS_DIR			:=	utils/
UTILS_FILES			:=	\
						ft_isdigit.c \
						ft_print_err.c \
						ft_print_stack.c \
						ft_putstr_fd.c \
						ft_strlen.c
UTILS				:=	$(addprefix $(UTILS_DIR), $(UTILS_FILES))

###################
#   INGREDIENTS	  #
###################
INCS				:=	./inc/

SRCS_DIR			:=	./srcs/
SRCS				:=	\
						$(ENTRY) \
						$(ACTIONS) \
						$(OPER) \
						$(SORTING) \
						$(STACK) \
						$(UTILS) \
						main.c
SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror -g3
IFLAGS				:=	$(addprefix -I, $(INCS))

################
#   UTENSILS   #
################
RM					:=	rm
RMFLAGS				:=	-r -f
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)

######################
#   COLORS DISPLAY   #
######################
RED					:=	'\033[0;31m'
GREEN				:=	'\033[1;32m'
ORANGE				:=	'\033[0;33m'
YELLOW				:=	'\033[1;33m'
NC					:=	'\033[0m'

###############
#   RECIPES   #
###############
all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)

fclean:
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)
	@echo $(GREEN) "Successfully removed:" $(NC) $(NAME) $(NC) "\n"

re:
	$(MAKE) fclean
	$(MAKE) all

############
#   SPEC   #
############
.PHONY: all clean fclean re
.SILENT:
