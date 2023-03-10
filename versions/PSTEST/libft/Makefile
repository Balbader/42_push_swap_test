# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 16:33:38 by baalbade          #+#    #+#              #
#    Updated: 2022/12/08 16:33:42 by baalbade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------#
#   NAME		 	                             #
#------------------------------------------------#
NAME				:=	libft.a


#------------------------------------------------#
#   srcs_files	 	                             #
#------------------------------------------------#
# ctype
CTYPE_DIR			:=	ctype/
CTYPE_FILES			:=	\
						ft_isalnum.c \
						ft_isalpha.c \
						ft_isascii.c \
						ft_isdigit.c \
						ft_islower.c \
						ft_isupper.c \
						ft_tolower.c \
						ft_toupper.c \
						ft_isprint.c
CTYPE				:=	$(addprefix $(CTYPE_DIR), $(CTYPE_FILES))


# dlist
DLIST_DIR			:=	dlist/
DLIST_FILES			:=	\
						ft_dlist_add_back.c \
						ft_dlist_add_front.c \
						ft_dlist_clear.c \
						ft_dlist_create.c \
						ft_dlist_find.c \
						ft_dlist_find_node.c \
						ft_dlist_foreach.c \
						ft_dlist_is_asc_sorted.c \
						ft_dlist_pop_back.c \
						ft_dlist_pop.c \
						ft_dlist_print_reverse.c \
						ft_dlist_push.c \
						ft_dlist_return_last_node.c \
						ft_dlist_rev_rotate.c \
						ft_dlist_rotate.c \
						ft_dlist_swap.c
DLIST				:=	$(addprefix $(DLIST_DIR), $(DLIST_FILES))


# ft_printf
FT_PRINTF_DIR		:=	ft_printf/
FT_PRINTF_FILES		:=	\
						ft_print_char.c \
						ft_printf.c \
						ft_print_hexa.c \
						ft_print_nb.c \
						ft_print_ptr.c \
						ft_print_str.c \
						ft_print_unsigned.c
FT_PRINTF			:=	$(addprefix $(FT_PRINTF_DIR), $(FT_PRINTF_FILES))


# llist
LLIST_DIR			:=	llist/
LLIST_FILES			:=	\
						ft_lstadd_back.c \
						ft_lstadd_front.c \
						ft_lstclear.c \
						ft_lstdelone.c \
						ft_lstiter.c \
						ft_lstlast.c \
						ft_lstmap.c \
						ft_lstnew.c \
						ft_lstsize.c
LLIST				:=	$(addprefix $(LLIST_DIR), $(LLIST_FILES))


# memory
MEMORY_DIR			:=	memory/
MEMORY_FILES		:=	\
						ft_bzero.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_memset.c
MEMORY				:=	$(addprefix $(MEMORY_DIR), $(MEMORY_FILES))


# output
OUTPUT_DIR			:=	output/
OUTPUT_FILES		:=	\
						ft_putchar_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_putstr_fd.c
OUTPUT				:=	$(addprefix $(OUTPUT_DIR), $(OUTPUT_FILES))


# stdlib
STDLIB_DIR			:=	stdlib/
STDLIB_FILES		:=	\
						ft_atoi.c \
						ft_calloc.c \
						ft_itoa.c
STDLIB				:=	$(addprefix $(STDLIB_DIR), $(STDLIB_FILES))


# string
STRING_DIR			:=	string/
STRING_FILES		:=	\
						ft_split.c \
						ft_strchr.c \
						ft_strcpy.c \
						ft_strdup.c \
						ft_striteri.c \
						ft_strjoin.c \
						ft_strlcat.c \
						ft_strlcpy.c \
						ft_strlen.c \
						ft_strmapi.c \
						ft_strncmp.c \
						ft_strncpy.c \
						ft_strndup.c \
						ft_strnjoin.c \
						ft_strnstr.c \
						ft_strrchr.c \
						ft_strtrim.c \
						ft_substr.c
STRING				:=	$(addprefix $(STRING_DIR), $(STRING_FILES))


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

INCS				:=	./include/

SRC_DIR				:=	./src/
SRCS				:=	\
						$(CTYPE) \
						$(DLIST) \
						$(FT_PRINTF) \
						$(LLIST) \
						$(MEMORY) \
						$(OUTPUT) \
						$(STDLIB) \
						$(STRING)
SRCS				:=	$(SRCS:%=$(SRC_DIR)/%)

BUILD_DIR			:=	.build
OBJS        		:=	$(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
DEPS        		:=	$(OBJS:.o=.d)

CC					:=	gcc
CFLAGS				:=	-Wall -Wextra -Werror
IFLAGS				:=	$(addprefix -I, $(INCS))

AR					:=	ar
ARFLAGS				:=	-r -c -s


#------------------------------------------------#
#   UTENSILS	                                 #
#------------------------------------------------#
# RM        = remove
# RMFLAGS   = recursive && force
# MAKEFLAGS = make flags
# DIR_DUP   = duplicate directory tree

RM					:=	rm
RMFLAGS				:=	-r -f
MAKEFLAGS   		+=	--no-print-directory
DIR_DUP				=	mkdir -p $(@D)


#------------------------------------------------#
#   COLORS DISPLAY                               #
#------------------------------------------------#
RED					:=	'\033[0;31m'
GREEN				:=	'\033[1;32m'
ORANGE				:=	'\033[0;33m'
YELLOW				:=	'\033[1;33m'
NC					:=	'\033[0m' # No Color


##################################
#             RULES 			 #
##################################
all: $(NAME)

$(NAME): $(OBJS)
	@echo $(GREEN) "--> $(NAME) COMPILED !"$(NC)"\n"
	@$(AR) $(ARFLAGS) $(NAME) $(OBJS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	@echo $(YELLOW) "COMPILING:" $(NC) $<
	@$(DIR_DUP)
	@$(CC) $(CFLAGS) $(IFLAGS) -c $ -o $@ $<
	@echo $(GREEN) "CREATED:" $(NC) $@ $(NC) "\n"

-include $(DEPS)

clean:
	@$(RM) $(RMFLAGS) $(BUILD_DIR) $(DEPS)

fclean:
	@echo $(RED) "---> clean: Removing:" $(NC) "$(NAME) / *.o files"
	@$(MAKE) clean
	@echo $(GREEN) "Successfully removed:" $(NC) "$(NAME) / *.o files" $(NC) "\n"
	@echo $(RED) "--> fclean: Removing:" $(NC) $(NAME)
	@$(RM) $(RMFLAGS) $(NAME)
	@echo $(GREEN) "Successfully removed:" $(NC) $(NAME) $(NC) "\n"

re:
	@$(MAKE) fclean
	@$(MAKE) all

#------------------------------------------------#
#   SPEC                                         #
#------------------------------------------------#
.PHONY: all clean fclean re
# .SILENT:
