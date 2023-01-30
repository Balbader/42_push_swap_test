# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/26 05:24:13 by baalbade          #+#    #+#              #
#    Updated: 2023/01/26 05:24:14 by baalbade         ###   ########.fr        #
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
						ft_check_int_size.c \
						ft_convert_entry.c \
						ft_get_entry.c \
						ft_look_for_doubles.c \
						ft_process_entry.c \
						ft_store_entry.c
ENTRY				:=	$(addprefix $(ENTRY_DIR), $(ENTRY_FILES))

# Operations
OPER_DIR			:=	operations/
OPER_FILES			:=	\
						ft_pa.c ft_pb.c \
						ft_ra.c ft_rb.c ft_rr.c \
						ft_rra.c ft_rrb.c ft_rrr.c \
						ft_sa.c ft_sb.c ft_ss.c
OPER				:=	$(addprefix $(OPER_DIR), $(OPER_FILES))

# ft_printf
FT_PRINTF_DIR		:=	ft_printf/
FT_PRINTF_FILES		:=	\
						ft_print_char.c \
						ft_print_hexa.c \
						ft_print_nb.c \
						ft_print_ptr.c \
						ft_print_str.c \
						ft_print_unsigned.c \
						ft_printf.c
FT_PRINTF			:=	$(addprefix $(FT_PRINTF_DIR), $(FT_PRINTF_FILES))

# Stack
STACK_DIR			:=	stack/
STACK_FILES			:=	ft_init_stack_a.c
STACK				:=	$(addprefix $(INIT_STACK_DIR), $(INIT_STACK_FILES))


# Utils
UTILS_DIR			:=	utils/
UTILS_FILES			:=	\
						ft_calloc.c \
						ft_free_stack.c \
						ft_isdigit.c \
						ft_putstr_fd.c \
						ft_strlen.c
UTILS				:=	$(addprefix $(UTILS_DIR), $(UTILS_FILES))

###################
#   INGREDIENTS	  #
###################
INCS				:=	./include/

SRCS_DIR			:=	./src/
SRCS				:=	\
						$(ENTRY) \
						$(OPER) \
						$(FT_PRINTF) \
						$(STACK) \
						$(UTILS) \
						main.c
SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
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
