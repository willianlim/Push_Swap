/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_middle.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 20:16:41 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 21:23:32 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_rbt_middle(t_rbt_node *root, t_rbt_tree *tree)
{
	if (root == NULL)
		return ;
	ft_rbt_middle(root->left, tree);
	tree->size++;
	if (tree->size == 6)
	{
		tree->middle = root;
		printf("%lu\n", tree->size);
		return ;
	}
	ft_rbt_middle(root->right, tree);
}
