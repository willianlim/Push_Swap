/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intrin_rbtree_lft_rot.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:06:13 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:13:16 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_intrin_rbtree_lft_rot(t_rbt_tree *tree, struct s_rbt_node *x)
{
	t_rbt_node	*y;

	if (!x || !x->right)
		return ;
	y = x->right;
	x->right = y->left;
	if (x->right != NULL)
		x->right->parent = x;
	y->parent = x->parent;
	if (x->parent == NULL)
		tree->root = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
}
