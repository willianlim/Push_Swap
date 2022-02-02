/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_middle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:16:41 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 10:36:31 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_rbt_middle(t_rbt_node *root, t_rbt_tree *tree)
{
	if (root == NULL)
		return ;
	ft_rbt_middle(root->left, tree);
	tree->count++;
	if (tree->count == (tree->size - 1) / 2)
	{
		tree->middle = root;
		return ;
	}
	ft_rbt_middle(root->right, tree);
}
