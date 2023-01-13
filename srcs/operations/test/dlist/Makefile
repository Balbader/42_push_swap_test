NAME		=	dlist.a

INC_DIR		=	./includes/
INC_FILES	=	ft_dlist.h

SRCS_DIR	=	./srcs/
SRCS_FILES	=	ft_dlist_add_back.c \
				ft_dlist_add_front.c \
				ft_dlist_clear.c \
				ft_dlist_create.c \
				ft_dlist_find.c \
				ft_dlist_find_node.c \
				ft_dlist_foreach.c \
				ft_dlist_insert_node.c \
				ft_dlist_pop_back.c \
				ft_dlist_pop.c \
				ft_dlist_print.c \
				ft_dlist_print_reverse.c \
				ft_dlist_push.c \
				ft_dlist_return_last_node.c \
				ft_dlist_rev_rotate.c \
				ft_dlist_rotate.c \
				ft_dlist_swap.c \
				ft_init_arr.c \
				ft_init_stack.c
SRCS		=	$(addprefix $(SRCS_DIR), $(SRCS_FILES))

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
IFLAGS		=	-I$(INC_DIR)

AR			=	ar
ARFLAGS		=	rc

RM			=	rm -rf

OBJS		=	$(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(CC) $(IFLAGS) -c main.c
	$(CC) $(IFLAGS) main.o -o main dlist.a

%.o: %.c
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
