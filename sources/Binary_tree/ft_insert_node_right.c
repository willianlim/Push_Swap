/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node_right.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:06:38 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 18:11:23 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

void	ft_insert_node_right(Node *n, int val)
{
	if (n->right == NULL)
	{
		Node	*new;

		new = (Node *)malloc(sizeof(Node));
		new->val = val;
		new->left = NULL;
		new->right = NULL;
		n->right = new;
	}
	else
	{
		if (val > n->right->val)
			ft_insert_node_right(n->right, val);
		if (val < n->right->val)
			ft_insert_node_left(n->right, val);
	}
}
