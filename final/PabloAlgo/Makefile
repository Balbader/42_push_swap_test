NAME 				:= Pablo_Run

INCS				:=	./include

SRCS_DIR			:=	./
SRCS				:=	\
						operations/ft_pa.c \
						operations/ft_pb.c \
						operations/ft_ra.c \
						operations/ft_rb.c \
						operations/ft_rr.c \
						operations/ft_sa.c \
						operations/ft_sb.c \
						operations/ft_ss.c \
						operations/ft_rra.c \
						operations/ft_rrb.c \
						operations/ft_rrr.c \
						srcs/ft_get_last_node.c \
						srcs/ft_get_before_last_node.c \
						srcs/ft_create_node.c \
						srcs/ft_find_mid_node.c \
						srcs/ft_init_rand_stack.c \
						srcs/ft_pre_sort_stack.c \
						srcs/ft_del_head_node.c \
						srcs/ft_add_front.c \
						srcs/ft_add_back.c \
						actions/ft_push_node.c \
						actions/ft_swap_stack.c \
						actions/ft_reverse_rotate_stack.c \
						actions/ft_rotate_stack.c \
						sorting/ft_init_arr_3.c \
						sorting/ft_sort_case_3.c \
						sorting/ft_sort_case_4.c \
						sorting/ft_sort_case_5.c \
						sorting/ft_sort_case_5_utils.c \
						sorting/ft_sort_stack.c \
						sorting/ft_print_stack.c \
						srcs/main.c

SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror -g3
IFLAGS				:=	$(addprefix -I, $(INCS))

RM					:=	rm
RMFLAGS				:=	-r -f
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP     		= 	mkdir -p $(@D)

RED					:=	'\033[0;31m'
GREEN				:=	'\033[1;32m'
ORANGE				:=	'\033[0;33m'
YELLOW				:=	'\033[1;33m'
NC					:=	'\033[0m'

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

.PHONY: all clean fclean re
.SILENT:
