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
#   SRCS FILES	 	                             #
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
DLIST_FILES			:=	\
						ft_create_node.c \
						ft_find_node.c \
						ft_insert_node.c
DLIST				:=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
LIBS				:=	libft.a
LIBS_TARGET			:=	./libft/libft.a

INCS				:=	./include/ \
						./libft/include/ \
						./test/include/

SRCS_DIR			:=	./src/
SRCS				:=	\
						$(CHECK_ENTRY) \
						$(CONVERT_ENTRY) \
						$(STORE_ENTRY) \
						$(OPER) \
						$(DLIST) \
						ft_push_swap.c \
						main.c
SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

OBJS_DIR			:=	./.objs
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS))
LDFLAGS				:=	$(addprefix -L, $(dir $(LIBS_TARGET) -lft -lreadline))
LDLIBS 				:= 	$(addprefix -l:, $(LIBS))


#------------------------------------------------#
#   TEST EXECUTABLE	                             #
#------------------------------------------------#
TEST_EXE			:=	run_test


#------------------------------------------------#
#   UNITY	                             #
#------------------------------------------------#
UNITY_SRCS_DIR		:=	./unity/src/
UNITY_FIX_DIR		:=	./unity/extras/fixture/src/
UNITY_CONF_DEFINES	:=	-D UNITY_OUTPUT_COLORS \
						-D UNITY_FIXTURES_NO_EXTRAS

UNITY_INC			:=	$(addprefix -I, $(UNITY_SRCS_DIR)) \
						$(addprefix -I, $(UNITY_FIX_DIR))


#------------------------------------------------#
#   TEST FILES		                             #
#------------------------------------------------#
TESTS_DIR			:=	./test/
TESTS				:=	$(UNITY_SRCS_DIR)/unity.c \
						$(UNITY_FIX_DIR)/unity_fixture.c \
						$(TEST_DIR)/src/ft_test_check_entry.c \
						$(TEST_DIR)/src/ft_test_convert_entry.c \
						$(TEST_DIR)/src/ft_test_store_entry.c \
						$(TEST_DIR)/test_runners/all_tests.c \
						$(TEST_DIR)/test_runners/all_tests_runner.c \
						$(addprefix $(SRCS_DIR), $(CHECK_ENTRY)) \
						$(addprefix $(SRCS_DIR), $(CONVERT_ENTRY)) \
						$(addprefix $(SRCS_DIR), $(STORE_ENTRY)) 
TESTS				:=	$(TESTS:%=$(TESTS_DIR))

TESTS_OBJS_DIR		:=	./test/.test_objs
TESTS_OBJS			:=	$(TEST_FILES:%.c=$(TESTS_BUILD_DIR)/%.o)


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
RM					:=	rm
RMFLAGS				:=	-r -f
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
all: $(NAME)

$(NAME): $(OBJS) $(LIBS_TARGET)
	$(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"

$(LIBS_TARGET):
	@echo $(RED) "Building Library: $(LIBS_TARGET)" $(NC) "\n"
	$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f clean; done
	$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)
	$(RM) $(RMFLAGS) $(TEST_BUILD_DIR)

fclean:
	for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f fclean; done
	$(MAKE) clean
	$(RM) $(RMFLAGS) $(NAME)
	$(RM) $(RMFLAGS) $(TEST_EXE)
	@echo $(GREEN) "Successfully removed:" $(NC) $(NAME) "and" $(TEST_EXE) $(NC) "\n"

re: 
	$(MAKE) fclean
	$(MAKE) all

test: $(TEST_BUILD_DIR) $(TEST_EXE)

$(TEST_BUILD_DIR):
	$(DIR_DUP)

$(TEST_EXE): $(LIBS_TARGET) $(TEST_OBJS)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(TEST_OBJS): $(TEST_BUILD_DIR)/%.o :%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(UNITY_CONFIG_DEFINES) $(UNITY_INC) $(IFLAGS) -c $< -o $@
	

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all clean fclean re
.SILENT:
