/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:24:51 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/21 10:43:18 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

static void	ft_bt_insert(t_rbt_tree *tree, t_rbt_node *new)
{
	t_rbt_node	*y;
	t_rbt_node	*x;

	y = NULL;
	x = tree->root;
	while (x)
	{
		y = x;
		if (new->data < x->data)
			x = x->left;
		else
			x = x->right;
	}
	new->parent = y;
	if (new->data > y->data)
		y->right = new;
	else
		y->left = new;
	tree->size++;
	ft_intrin_insert_fixup(tree, new);
}

void	ft_rbt_insert(t_rbt_tree *tree, int data)
{
	t_rbt_node	*new;

	new = ft_rbt_new_node(data);
	if (tree->root == NULL)
	{
		new->color = BLACK;
		tree->root = new;
		tree->size++;
	}
	else
		ft_bt_insert(tree, new);
}
