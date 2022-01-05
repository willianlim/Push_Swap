#ifndef FT_BINARY_TREE_H
#define FT_BINARY_TREE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_node
{
	int				val;
	struct s_node	*left;
	struct s_node	*right;
}Node;

typedef struct s_tree
{
	Node	*root;
}Tree;

void	ft_insert_node(Tree *t, int val);
void	ft_insert_node_left(Node *n, int val);
void	ft_insert_node_right(Node *n, int val);
void	ft_tree_print(Node *root);

#endif
