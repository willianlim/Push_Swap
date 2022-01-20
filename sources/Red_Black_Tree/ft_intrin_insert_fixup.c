/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intrin_insert_fixup.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:41:12 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:42:37 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

int	ft_uncle_is_red(t_rbt_node *z)
{
	t_rbt_node	*y;

	y = z->parent->parent;
	if (z->parent == y->left)
		y = y->right;
	else
		y = y->left;
	if (y && y->color == RED)
	{
		y->color = BLACK;
		z->parent->color = BLACK;
		z->parent->parent->color = RED;
		z = z->parent->parent;
		return (1);
	}
	else
		return (0);
}

void	ft_case_lft(t_rbt_tree *tree, t_rbt_node *z)
{
	char	tmp_col;

	if (z == z->parent->left)
	{
		tmp_col = z->parent->color;
		z->parent->color = z->parent->parent->color;
		z->parent->parent->color = tmp_col;
		ft_intrin_rbtree_rgt_rot(tree, z->parent->parent);
	}
	else
	{
		tmp_col = z->color;
		z->color = z->parent->parent->color;
		z->parent->parent->color = tmp_col;
		ft_intrin_rbtree_lft_rot(tree, z->parent);
		ft_intrin_rbtree_rgt_rot(tree, z->parent);
	}
}

void	ft_case_rgt(t_rbt_tree *tree, t_rbt_node *z)
{
	char	tmp_col;

	if (z == z->parent->right)
	{
		tmp_col = z->parent->color;
		z->parent->color = z->parent->parent->color;
		z->parent->parent->color = tmp_col;
		ft_intrin_rbtree_lft_rot(tree, z->parent->parent);
	}
	else
	{
		tmp_col = z->color;
		z->color = z->parent->parent->color;
		z->parent->parent->color = tmp_col;
		ft_intrin_rbtree_rgt_rot(tree, z->parent);
		ft_intrin_rbtree_lft_rot(tree, z->parent);
	}
}

void	ft_intrin_insert_fixup(t_rbt_tree *tree, t_rbt_node *z)
{
	while (z != tree->root && z->parent != tree->root && \
	z->parent->color == RED && z->color == RED)
	{
		if (ft_uncle_is_red(z))
		{
			z = z->parent->parent;
			continue ;
		}
		else if (z->parent == z->parent->parent->left)
			ft_case_lft(tree, z);
		else if (z->parent == z->parent->parent->right)
			ft_case_rgt(tree, z);
	}
	tree->root->color = BLACK;
}
