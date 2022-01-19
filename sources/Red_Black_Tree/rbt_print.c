/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbt_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:13:52 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/19 16:10:26 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	rbt_print(struct s_rbt_node *root)
{
	// if (root == NULL)
	// 	return ;
	// rbt_print(root->lft);
	// printf("%d\n", root->dat);
	// rbt_print(root->rgt);

	static int last = 0;
	if (root == NULL)
		return;
	rbt_print(root->lft);
	printf("%d\t%c\n", root->dat, root->col);
	if (root->dat < last)
		printf("PUTE\n");
	last = root->dat;
	rbt_print(root->rgt);
}
