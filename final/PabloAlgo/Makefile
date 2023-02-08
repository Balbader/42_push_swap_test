NAME 				:= Pablo_Run

INCS				:=	./

SRCS_DIR			:=	./
SRCS				:=	\
						ft_pa.c \
						ft_pb.c \
						ft_ra.c \
						ft_rb.c \
						ft_rr.c \
						ft_sa.c \
						ft_sb.c \
						ft_ss.c \
						ft_rra.c \
						ft_rrb.c \
						ft_rrr.c \
						ft_get_last_node.c \
						ft_get_before_last_node.c \
						ft_push_node.c \
						ft_swap_stack.c \
						ft_reverse_rotate_stack.c \
						ft_rotate_stack.c \
						ft_create_node.c \
						ft_find_mid_node.c \
						ft_init_rand_stack.c \
						ft_pre_sort_stack.c \
						ft_del_head_node.c \
						main.c

SRCS        		:=	$(SRCS:%=$(SRCS_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRCS_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
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
