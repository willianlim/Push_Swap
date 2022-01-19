NAME = push_swap
CC = clang
CFLAGS = -Wall -Wextra -Werror
APP = ./apps
LIB_PATH = ./libft
LIBFT = libft.a
OBJDIR = ./objects
SRCDIR_CIRCLIST = ./sources/Doubly_Circular_Linked_List
SRCDIR_BTREE = ./sources/Red_Black_Tree
INCLUDE = ./includes
REMOVE = rm -rf

SRC_CIRC += ft_circList_add_first.c ft_circList_add_last.c ft_circList_create.c
SRC_CIRC += ft_circList_destroy.c ft_circList_inverted_print.c
SRC_CIRC += ft_circList_is_empty.c ft_circList_print.c ft_circList_remove.c
SRC_CIRC += ft_circNode_create.c ft_circNode_destroy.c
OBJCIRC = $(SRC_CIRC:.c=.o)
OBJECTS_CIRC = $(addprefix $(OBJDIR)/, $(OBJCIRC))

SRC_BTREE += rb_freeall.c rbt_print.c rbt_insert.c intrin_rbtree_rgt_rot.c
SRC_BTREE += intrin_rbtree_lft_rot.c intrin_insert_fixup.c
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
