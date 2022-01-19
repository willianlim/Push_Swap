#ifndef FT_RBTREE_H
#define FT_RBTREE_H

#include <stdio.h>
#include <stdlib.h>

#define BLACK 'B'
#define RED 'R'

typedef struct	s_rbt_node
{
	int					dat;
	char				col;
	struct s_rbt_node	*lft;
	struct s_rbt_node	*rgt;
	struct s_rbt_node	*up;
}t_rbt_node;

typedef t_rbt_node	t_rb_tree;

void	intrin_insert_fixup(t_rbt_node **root, t_rbt_node *z);
void	intrin_rbtree_lft_rot(t_rbt_node **root, t_rbt_node *x);
void	intrin_rbtree_rgt_rot(t_rbt_node **root, t_rbt_node *y);
void	rbt_insert(t_rbt_node **root, int dat);
void	rbt_print(t_rbt_node *root);
void	rb_freeall(t_rbt_node **root);


#endif
