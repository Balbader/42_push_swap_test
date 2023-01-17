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

#------------------------------------------------#
#   NAME		 	                             #
#------------------------------------------------#
NAME				:=	push_swap


#------------------------------------------------#
#   LIBS	 	                                 #
#------------------------------------------------#
# LIBS        libraries to be used
# LIBS_TARGET libraries to be built

LIBS				:=	libft
LIBS_TARGET			:=	./libft/libft.a


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


# dbl_list
DLIST_DIR			:=	dbl_list/
DLIST_FILES			:=	ft_create_node.c \
						ft_find_node.c \
						ft_insert_node.c

DLIST				:=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


#------------------------------------------------#
#   INCLUDES	 	                             #
#------------------------------------------------#
INCS				:=	./include \
						./libft/includes
INC_DIR				:=	./include/
INC_FILE			:=	push_swap.h


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
# SRC_DIR   source directory
# SRCS      source files
# OBJ_DIR   object directory
# OBJS      object files
#
SRC_DIR				:=	src
SRCS				:=	\
						$(CHECK_ENTRY) \
						$(CONVERT_ENTRY) \
						$(STORE_ENTRY) \
						$(DLIST) \
						ft_push_swap.c \
						main.c
SRCS        		:=	$(SRCS:%=$(SRC_DIR)/%)

OBJ_DIR				:=	obj
OBJS        		:=	$(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
# RM        force remove
# MAKEFLAGS make flags
# DIR_DUP   duplicate directory tree
#
# CC        compiler
# CFLAGS    compiler flags
# IFLAGS 	preprocessor flags

RM					:=	rm -rf
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	-I $(INC_DIR)

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
# all       default goal
# $(NAME)   linking .o -> binary
# %.o       compilation .c -> .o
# clean     remove .o
# fclean    remove .o + binary
# re        remake default goal

all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

clean:
	@echo $(RED) "!!! make clean: Removing *.o !!!" $(NC) "\n"
	$(RM) $(OBJS)

fclean:
	@echo $(RED) "!!! make fclean: Removing *.o && $(NAME) !!!" $(NC) "\n"
	$(MAKE) clean
	$(RM) $(NAME)

re: 
	@echo $(RED) "!!! make re launched !!!" $(NC) "\n"
	$(MAKE) fclean
	$(MAKE) all


#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all clean fclean re
# .SILENT:
