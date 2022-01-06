/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_version_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:30:01 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 23:36:58 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

Node	*ft_new_version_insert(Node *root, int val)
{
	if (root == NULL)
		return (ft_new_node(val));
	else
	{
		if (val < root->val)
			root->left = ft_new_version_insert(root->left, val);
		if (val > root->val)
			root->right = ft_new_version_insert(root->right, val);
		return (root);
	}
}
