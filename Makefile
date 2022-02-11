NAME = ./bin/push_swap
DIRNAME = ./bin
CC = clang -g
CFLAGS = -Wall -Wextra -Werror
APP = ./apps
LIB_PATH = ./libft
LIBFT = libft.a
OBJDIR = ./objects
SRCDIR_CIRCLIST = ./sources/Doubly_Circular_Linked_List
SRCDIR_RBTREE = ./sources/Red_Black_Tree
SRCDIR_OPER = ./sources/Operations
SRCDIR_PUSH = ./sources/Push_Swap
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
SRC_BTREE += ft_intrin_insert_fixup.c ft_rbt_minimum.c ft_rbt_middle.c
SRC_BTREE += ft_rbt_maximum.c mytime.c ft_rbt_create.c ft_rbt_new_node.c
OBJRBTREE = $(SRC_BTREE:.c=.o)
OBJECTS_RBTREE = $(addprefix $(OBJDIR)/, $(OBJRBTREE))

SRC_OPER += ft_push_a.c ft_push_b.c ft_swap_b.c ft_swap_a.c ft_swap_sa_sb.c
SRC_OPER += ft_rotate_a.c ft_rotate_b.c ft_rotate_ra_rb.c ft_reverse_rotate_a.c
SRC_OPER += ft_reverse_rotate_b.c ft_rra_rrb.c
OBJOPER = $(SRC_OPER:.c=.o)
OBJECTS_OPER = $(addprefix $(OBJDIR)/, $(OBJOPER))

SRC_PUSH += ft_push_swap.c ft_sort_three.c ft_sort_five.c
SRC_PUSH += ft_sort_others2.c ft_sort_three2.c ft_sort_others3.c
OBJPUSH = $(SRC_PUSH:.c=.o)
OBJECTS_PUSH = $(addprefix $(OBJDIR)/, $(OBJPUSH))

all: $(NAME)

$(NAME): $(OBJECTS_CIRC) $(OBJECTS_RBTREE) $(OBJECTS_OPER) $(OBJECTS_PUSH)
	$(MAKE) -C $(LIB_PATH)
	@mkdir -p ./bin/
	$(CC) $(APP)/main.c -o $(NAME) $(OBJECTS_CIRC) $(OBJECTS_RBTREE) $(OBJECTS_OPER) $(OBJECTS_PUSH) $(LIB_PATH)/$(LIBFT)

$(OBJDIR)/%.o: $(SRCDIR_CIRCLIST)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJDIR)/%.o: $(SRCDIR_RBTREE)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJDIR)/%.o: $(SRCDIR_OPER)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

$(OBJDIR)/%.o: $(SRCDIR_PUSH)/%.c
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -I $(INCLUDE) -o $@

bonus: all

debug:
	bash test.sh

debug1:
	bash test_number_line.sh

debug2:
	bash test_operation.sh

clean:
	$(MAKE) fclean -C $(LIB_PATH)

fclean: clean
	$(REMOVE) $(OBJDIR)
	$(REMOVE) $(DIRNAME)

re: fclean all

.PHONY: bonus clean fclean re
