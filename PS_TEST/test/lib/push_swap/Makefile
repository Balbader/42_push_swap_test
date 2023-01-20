#**************************************************************************** #
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

#------------------------------------------------#
#   NAME		 	                             #
#------------------------------------------------#
NAME				:=	push_swap.a


#------------------------------------------------#
#   srcs_files	 	                             #
#------------------------------------------------#
# Check Entry
CHECK_ENTRY_DIR		:=	1_check_entry/
CHECK_ENTRY_FILES	:=	ft_check_entry.c
CHECK_ENTRY			:=	$(addprefix $(CHECK_ENTRY_DIR), $(CHECK_ENTRY_FILES))


# Convert Entry
CONVERT_ENTRY_DIR	:=	2_convert_entry/
CONVERT_ENTRY_FILES	:=	ft_convert_entry.c
CONVERT_ENTRY		:=	$(addprefix $(CONVERT_ENTRY_DIR), $(CONVERT_ENTRY_FILES))


# Store Entry
STORE_ENTRY_DIR		:=	3_store_entry/
STORE_ENTRY_FILES	:=	ft_store_entry.c
STORE_ENTRY			:=	$(addprefix $(STORE_ENTRY_DIR), $(STORE_ENTRY_FILES))


# Operations
OPER_DIR			:=	4_operations/
OPER_FILES			:=	\
						ft_pa.c \
						ft_pb.c \
						ft_ra.c \
						ft_rb.c \
						ft_rr.c \
						ft_rra.c \
						ft_rrb.c \
						ft_rrr.c \
						ft_sa.c \
						ft_sb.c \
						ft_ss.c
OPER				:=	$(addprefix $(OPER_DIR), $(OPER_FILES))


# dbl_list
DLIST_DIR			:=	dbl_list/
DLIST_FILES			:=	ft_create_node.c \
						ft_find_node.c \
						ft_insert_node.c
DLIST				:=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
# INCS		= Header files locations

# SRC_DIR	= source directory
# SRCS		= source files

# BUILD_DIR	= object directory
# OBJS		= object files
# DEPS		= dependency files

# CC        = compiler
# CFLAGS    = compiler flags
# IFLAGS 	= preprocessor flags

# AR		= creating the library
# ARFLAGS	= at the root of the repository

LIBS				:=	../libft/

LIBS_TARGET			:=	../libft/libft.a

INCS				:=	./include/ \
						../libft/include/

SRC_DIR				:=	./src/
SRCS				:=	\
						$(CHECK_ENTRY) \
						$(CONVERT_ENTRY) \
						$(STORE_ENTRY) \
						$(OPER) \
						$(DLIST) 

SRCS        		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR			:=	./.build/
OBJS        		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS))
# LDFLAGS				:=	$(addprefix -L, $(dir $(LIBS_TARGET)))
# LDLIBS 				:= 	$(addprefix -l, $(LIBS))

AR					:=	ar
ARFLAGS				:=	-r -c -s


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
# RM        = force remove
# MAKEFLAGS = make flags
# DIR_DUP   = duplicate directory tree

RM					:=	rm -rf
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)


#------------------------------------------------#
#   COLORS DISPLAY                               #
#------------------------------------------------#
RED					:=	'\033[0;31m'
GREEN				:=	'\033[1;32m'
ORANGE				:=	'\033[0;33m'
YELLOW				:=	'\033[1;33m'
NC					:=	'\033[0m' # No Color


#------------------------------------------------#
#   RECIPES                                      #
#------------------------------------------------#
# all       = default goal
# $(NAME)   = linking .o -> binary
# %.o       = compilation .c -> .o
# clean     = remove .o
# fclean    = remove .o + binary
# re        = remake default goal

all: $(NAME)

$(NAME): $(OBJS) $(LIBS_TARGET)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

# @$(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
$(LIBS_TARGET):
	@echo $(RED) "--> Building $(LIBS) executable" $(NC) "\n"
	@$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

# @echo $(RED) "---> Building $(NAME)" $(NC) "\n"
-include $(DEPS)

clean:
	@$(RM) $(BUILD_DIR) $(DEPS)

# @for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f clean; done

fclean:
	@echo $(RED) "---> clean: Removing:" $(NC) "$(NAME) / *.o files"
	@echo $(GREEN) "Successfully removed:" $(NC) "$(NAME) / *.o files" $(NC) "\n"
	@echo $(RED) "--> fclean: Removing:" $(NC) $(NAME)
	@$(MAKE) clean
	@$(RM) $(NAME) 
	@echo $(GREEN) "Successfully removed:" $(NC) $(NAME) $(NC) "\n"

# @for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f fclean; done

re: 
	@$(MAKE) fclean
	@$(MAKE) all


#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all clean fclean re
