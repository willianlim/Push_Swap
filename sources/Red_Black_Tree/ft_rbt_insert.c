/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:24:51 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/31 20:42:35 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

static int	ft_bt_insert(t_rbt_tree *tree, t_rbt_node *new)
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
		else if (new->data > x->data)
			x = x->right;
		else if (new->data == x->data)
			return (0);
	}
	new->parent = y;
	if (new->data > y->data)
		y->right = new;
	else
		y->left = new;
	tree->size++;
	ft_intrin_insert_fixup(tree, new);
	return (1);
}

int	ft_rbt_insert(t_rbt_tree *tree, int data)
{
	t_rbt_node	*new;

	new = ft_rbt_new_node(data);
	if (tree->root == NULL)
	{
		new->color = BLACK;
		tree->root = new;
		tree->size++;
	}
	else if (!ft_bt_insert(tree, new))
	{
		free (new);
		return (0);
	}
	return (1);
}
