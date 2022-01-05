/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:59:08 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 18:12:11 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

void	ft_insert_node(Tree *t, int val)
{
	if (t->root == NULL)
	{
		Node	*new;

		new = (Node *)malloc(sizeof(Node));
		new->val = val;
		new->left = NULL;
		new->right = NULL;
		t->root = new;
	}
	else
	{
		if (val < t->root->val)
			ft_insert_node_left(t->root, val);
		if (val > t->root->val)
			ft_insert_node_right(t->root, val);
	}
}
