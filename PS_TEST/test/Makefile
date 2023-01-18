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
#   srcs_files	 	                             #
#------------------------------------------------#
# Test Check Entry
TEST_ENTRY_DIR		:=	1_test_check_entry/
TEST_ENTRY_FILES	:=	ft_test_check_entry.c
TEST_ENTRY			:=	$(addprefix $(TEST_ENTRY_DIR), $(TEST_ENTRY_FILES))


# Convert Entry
TEST_CONVERT_DIR	:=	2_test_convert_entry/
TEST_CONVERT_FILES	:=	ft_test_convert_entry.c
TEST_CONVERT		:=	$(addprefix $(TEST_CONVERT_DIR), $(TEST_CONVERT_FILES))


# Store Entry
TEST_STORE_DIR		:=	3_test_store_entry/
TEST_STORE_FILES	:=	ft_test_store_entry.c
TEST_STORE			:=	$(addprefix $(TEST_STORE_DIR), $(TEST_STORE_FILES))


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
LIBS				:=	lib_push_swap lib_libft
LIBS_TARGET			:=	\
						../lib_push_swap.a \
						../libft/lib_libft.a

INCS				:=	./include/ \
						../include/ \
						../libft/include/

SRC_DIR				:=	./src/
SRCS				:=	\
						$(TEST_ENTRY) \
						$(TEST_CONVERT) \
						$(TEST_STORE)
SRCS        		:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR			:=	./.test/
OBJS        		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS				:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS))
LDFLAGS				:=	$(addprefix -L, $(dir $(LIBS_TARGET)))
LDLIBS 				:=	$(addprefix -l, $(LIBS))


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
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
	@$(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)

$(LIBS_TARGET):
	$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f clean; done
	@$(RM) $(OBJS) $(BUILD_DIR)	$(DEPS)

fclean:
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f fclean; done
	@$(MAKE) clean
	@$(RM) $(NAME) 

re: 
	@$(MAKE) fclean
	@$(MAKE) all


#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all fclean clean re
.SILENT:
