/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intrin_rbtree_rgt_rot.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:01:06 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:15:23 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_intrin_rbtree_rgt_rot(t_rbt_tree *tree, struct s_rbt_node *y)
{
	t_rbt_node	*x;

	if (!y || !y->left)
		return ;
	x = y->left;
	y->left = x->right;
	if (x->right != NULL)
		x->right->parent = y;
	x->parent = y->parent;
	if (x->parent == NULL)
		tree->root = x;
	else if (y == y->parent->left)
		y->parent->left = x;
	else
		y->parent->right = x;
	x->right = y;
	y->parent = x;
}
