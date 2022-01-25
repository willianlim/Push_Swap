/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intrin_insert_fixup.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:41:12 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/21 10:45:41 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

int	ft_uncle_is_red(t_rbt_node *new)
{
	t_rbt_node	*y;

	y = new->parent->parent;
	if (new->parent == y->left)
		y = y->right;
	else
		y = y->left;
	if (y && y->color == RED)
	{
		y->color = BLACK;
		new->parent->color = BLACK;
		new->parent->parent->color = RED;
		new = new->parent->parent;
		return (1);
	}
	else
		return (0);
}

void	ft_case_lft(t_rbt_tree *tree, t_rbt_node *new)
{
	char	tmp_col;

	if (new == new->parent->left)
	{
		tmp_col = new->parent->color;
		new->parent->color = new->parent->parent->color;
		new->parent->parent->color = tmp_col;
		ft_intrin_rbtree_rgt_rot(tree, new->parent->parent);
	}
	else
	{
		tmp_col = new->color;
		new->color = new->parent->parent->color;
		new->parent->parent->color = tmp_col;
		ft_intrin_rbtree_lft_rot(tree, new->parent);
		ft_intrin_rbtree_rgt_rot(tree, new->parent);
	}
}

void	ft_case_rgt(t_rbt_tree *tree, t_rbt_node *new)
{
	char	tmp_col;

	if (new == new->parent->right)
	{
		tmp_col = new->parent->color;
		new->parent->color = new->parent->parent->color;
		new->parent->parent->color = tmp_col;
		ft_intrin_rbtree_lft_rot(tree, new->parent->parent);
	}
	else
	{
		tmp_col = new->color;
		new->color = new->parent->parent->color;
		new->parent->parent->color = tmp_col;
		ft_intrin_rbtree_rgt_rot(tree, new->parent);
		ft_intrin_rbtree_lft_rot(tree, new->parent);
	}
}

void	ft_intrin_insert_fixup(t_rbt_tree *tree, t_rbt_node *new)
{
	while (new != tree->root && new->parent != tree->root && \
	new->parent->color == RED && new->color == RED)
	{
		if (ft_uncle_is_red(new))
		{
			new = new->parent->parent;
			continue ;
		}
		else if (new->parent == new->parent->parent->left)
			ft_case_lft(tree, new);
		else if (new->parent == new->parent->parent->right)
			ft_case_rgt(tree, new);
	}
	tree->root->color = BLACK;
}
