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
NAME				:=	run_test


#------------------------------------------------#
#   INGREDIENTS	 	                             #
#------------------------------------------------#
LIBS				:=	push_swap.a \
						libft.a

LIBS_TARGET			:=	./lib/push_swap/push_swap.a \
						./lib/libft/libft.a

INCS				:=	./include/ \
						./lib/push_swap/include/ \
						./lib/libft/include/

SRCS_DIR			:=	./src/
SRCS				:=	ft_test_check_entry.c \
						ft_test_convert_entry.c \
						ft_test_store_entry.c \
						main.c
SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS				:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS)) -MMD -MP
LDFLAGS				:=	$(addprefix -L, $(dir $(LIBS_TARGET)))
LDLIBS 				:=	$(addprefix -l:, $(LIBS))


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
RM					:=	rm -rf
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
	@$(CC) $(LDFLAGS) $(OBJS) $(LDLIBS) -o $(NAME)
	@echo $(GREEN) "--> $(NAME) COMPILED !" $(NC)" \n"

$(LIBS_TARGET):
	@echo $(RED) "--> Building push_swap.a" $(NC) "\n"
	@$(MAKE) -C $(@D)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(IFLAGS) -c -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f clean; done
	@$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)

fclean:
	@for f in $(dir $(LIBS_TARGET)); do $(MAKE) -C $$f fclean; done
	@$(MAKE) clean
	@$(RM) $(RMFLAGS) $(NAME)

re: 
	@$(MAKE) fclean
	@$(MAKE) all


#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all clean fclean re
# .SILENT:
