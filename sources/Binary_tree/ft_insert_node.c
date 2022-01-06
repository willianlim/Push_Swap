/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 16:59:08 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 23:14:17 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

void	ft_insert_node(Tree *t, int val)
{
	if (t->root == NULL)
		t->root = ft_new_node(val);
	else
	{
		if (val < t->root->val)
			ft_insert_node_left(t->root, val);
		if (val > t->root->val)
			ft_insert_node_right(t->root, val);
	}
}
