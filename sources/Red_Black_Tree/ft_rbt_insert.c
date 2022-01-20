/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:24:51 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:14:44 by wrosendo         ###   ########.fr       */
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
	new->color = RED;
	ft_intrin_insert_fixup(tree, new);
}

void	ft_rbt_insert(t_rbt_tree *tree, int dat)
{
	t_rbt_node	*z;

	z = (t_rbt_node *)malloc(sizeof(t_rbt_node));
	z->data = dat;
	z->left = NULL;
	z->right = NULL;
	z->parent = NULL;
	if (tree->root == NULL)
	{
		z->color = BLACK;
		tree->root = z;
	}
	else
		ft_bt_insert(tree, z);
}
