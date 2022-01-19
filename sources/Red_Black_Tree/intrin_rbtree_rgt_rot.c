/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intrin_rbtree_rgt_rot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:01:06 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/19 16:07:16 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	intrin_rbtree_rgt_rot(struct s_rbt_node **root, struct s_rbt_node *y)
{
	t_rbt_node	*x;

	if (!y || !y->lft)
		return ;
	x = y->lft;
	y->lft = x->rgt;
	if (x->rgt != NULL)
		x->rgt->up = y;
	x->up = y->up;
	if (x->up == NULL)
		(*root) = x;
	else if (y == y->up->lft)
		y->up->lft = x;
	else
		y->up->rgt = x;
	x->rgt = y;
	y->up = x;
}
