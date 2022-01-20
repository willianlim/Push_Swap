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

SRC_CIRC += ft_circlist_add_first.c ft_circlist_add_last.c ft_circlist_create.c
SRC_CIRC += ft_circlist_destroy.c ft_circlist_inverted_print.c
SRC_CIRC += ft_circlist_is_empty.c ft_circlist_print.c ft_circlist_remove.c
SRC_CIRC += ft_circnode_create.c ft_circnode_destroy.c
OBJCIRC = $(SRC_CIRC:.c=.o)
OBJECTS_CIRC = $(addprefix $(OBJDIR)/, $(OBJCIRC))

SRC_BTREE += ft_rbt_freeall.c ft_rbt_print.c ft_rbt_insert.c
SRC_BTREE += ft_intrin_rbtree_rgt_rot.c ft_intrin_rbtree_lft_rot.c
SRC_BTREE += ft_intrin_insert_fixup.c ft_rbt_minimum.c
SRC_BTREE += ft_rbt_maximum.c mytime.c ft_rbt_create.c
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
