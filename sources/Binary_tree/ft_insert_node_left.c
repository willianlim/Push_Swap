/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node_left.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:04:58 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 23:15:08 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

void	ft_insert_node_left(Node *n, int val)
{
	if (n->left == NULL)
		n->left = ft_new_node(val);
	else
	{
		if (val < n->left->val)
			ft_insert_node_left(n->left, val);
		if (val > n->left->val)
			ft_insert_node_right(n->left, val);
	}
}


