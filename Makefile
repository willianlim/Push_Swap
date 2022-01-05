NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
APP = ./apps
LIB_PATH = ./libft
LIBFT = libft.a
OBJDIR = ./objects
SRCDIR_CIRCLIST = ./sources/Doubly_Circular_Linked_List
INCLUDE = ./includes
REMOVE = rm -rf

SRC_FILE += ft_circList_add_first.c ft_circList_add_last.c ft_circList_create.c
SRC_FILE += ft_circList_destroy.c ft_circList_inverted_print.c
SRC_FILE += ft_circList_is_empty.c ft_circList_print.c ft_circList_remove.c
SRC_FILE += ft_circNode_create.c ft_circNode_destroy.c
OBJFILE = $(SRC_FILE:.c=.o)
OBJECTS = $(addprefix $(OBJDIR)/, $(OBJFILE))

all: $(NAME)

$(NAME): $(OBJECTS)
	$(MAKE) -C $(LIB_PATH)
	$(CC) $(APP)/ft_push_swap.c -o $(NAME) $(OBJECTS) $(LIB_PATH)/$(LIBFT)

$(OBJDIR)/%.o: $(SRCDIR_CIRCLIST)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

bonus: all

clean:
	$(MAKE) clean -C $(LIB_PATH)

fclean: clean
	$(REMOVE) $(OBJDIR)
	$(REMOVE) $(NAME)

re: fclean all

.PHONY: bonus clean fclean re
