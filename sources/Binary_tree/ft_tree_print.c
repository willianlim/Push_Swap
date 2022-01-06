/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tree_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 17:25:29 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 23:45:51 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

void	ft_tree_print(Node *root)
{
	if (root != NULL)
	{
		ft_tree_print(root->left);
		printf("%d ", root->val);
		ft_tree_print(root->right);
	}
}
