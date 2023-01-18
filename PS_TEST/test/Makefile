# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 12:36:12 by baalbade          #+#    #+#              #
#    Updated: 2023/01/18 12:36:17 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------#
#   NAME		 	                             #
#------------------------------------------------#
NAME				:=	test


#------------------------------------------------#
#   INCLUDES	 	                             #
#------------------------------------------------#
# INCS		= Header files locations

INCS				:=	include \
						../include \
						../libft/include


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
# SRC_DIR	= source directory
# SRCS		= source files

# BUILD_DIR	= object directory
# OBJS		= object files

SRC_DIR				:=	src
SRCS				:=	\
						ft_test_check_entry.c \
						ft_test_convert_entry.c \
						ft_test_store_entry.c

SRCS        		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR			:=	.test
OBJS        		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
# RM        = force remove
# MAKEFLAGS = make flags
# DIR_DUP   = duplicate directory tree

# CC        = compiler
# CFLAGS    = compiler flags
# IFLAGS 	= preprocessor flags

RM					:=	rm -rf
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS))


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

$(NAME): $(OBJS) $(PUSH)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"
	$(CC) $(OBJS) -o $(NAME)

$(PUSH):
	@echo $(YELLOW) "Making Push Swap: $(PUSH_TARGET)" $(NC) "\n"
	$(MAKE) $(PUSH)
	$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	@$(RM) $(BUILD_DIR) $(DEPS)

fclean:
	@$(MAKE) clean
	@$(RM) $(NAME) 
	@echo $(GREEN) "Successfully removed PUSH_TARGET:" $(NC) $(PUSH_TARGET) $(NC) "\n"

re: 
	@$(MAKE) fclean
	@$(MAKE) all


#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all fclean clean re
