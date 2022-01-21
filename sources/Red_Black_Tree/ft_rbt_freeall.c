/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_freeall.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:18:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 21:23:03 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

static void	ft_recur_free(t_rbt_node *start)
{
	t_rbt_node	*tmp;

	while (start->left || start->right)
	{
		if (start->left)
			start = start->left;
		else
			start = start->right;
	}
	tmp = start->parent;
	free(start);
	if (tmp)
	{
		if (start == tmp->left)
			tmp->left = NULL;
		else
			tmp->right = NULL;
		ft_recur_free(tmp);
	}
}

void	ft_rbt_freeall(t_rbt_tree *tree)
{
	ft_recur_free(tree->root);
	free(tree);
}
