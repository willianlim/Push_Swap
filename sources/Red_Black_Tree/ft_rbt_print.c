/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:13:52 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:44:20 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	// if (root == NULL)
	// 	return ;
	// rbt_print(root->left);
	// printf("%d\n", root->data);
	// rbt_print(root->rgt);

#include "ft_rbtree.h"

void	ft_rbt_print(t_rbt_node *root)
{
	static int	last;

	last = 0;
	if (root == NULL)
		return ;
	ft_rbt_print(root->left);
	printf("%d\t%c\n", root->data, root->color);
	if (root->data < last)
		printf("PUTE\n");
	last = root->data;
	ft_rbt_print(root->right);
}
