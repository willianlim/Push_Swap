NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
APP = ./apps
LIB_PATH = ./libft
LIBFT = libft.a
OBJDIR = ./objects
SRCDIR_CIRCLIST = ./sources/Doubly_Circular_Linked_List
SRCDIR_BTREE = ./sources/Binary_tree
INCLUDE = ./includes
REMOVE = rm -rf

SRC_CIRC += ft_circList_add_first.c ft_circList_add_last.c ft_circList_create.c
SRC_CIRC += ft_circList_destroy.c ft_circList_inverted_print.c
SRC_CIRC += ft_circList_is_empty.c ft_circList_print.c ft_circList_remove.c
SRC_CIRC += ft_circNode_create.c ft_circNode_destroy.c
OBJCIRC = $(SRC_CIRC:.c=.o)
OBJECTS_CIRC = $(addprefix $(OBJDIR)/, $(OBJCIRC))

SRC_BTREE += ft_insert_node.c ft_insert_node_left.c ft_insert_node_right.c
SRC_BTREE += ft_tree_print.c
OBJBTREE = $(SRC_BTREE:.c=.o)
OBJECTS_BTREE = $(addprefix $(OBJDIR)/, $(OBJBTREE))

all: $(NAME)

$(NAME): $(OBJECTS_CIRC) $(OBJECTS_BTREE)
	$(MAKE) -C $(LIB_PATH)
	$(CC) $(APP)/ft_push_swap.c -o $(NAME) $(OBJECTS_CIRC) $(OBJECTS_BTREE) $(LIB_PATH)/$(LIBFT)

$(OBJDIR)/%.o: $(SRCDIR_CIRCLIST)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJDIR)/%.o: $(SRCDIR_BTREE)/%.c
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
