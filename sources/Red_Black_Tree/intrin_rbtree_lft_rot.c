/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intrin_rbtree_lft_rot.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 10:06:13 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/19 16:07:08 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	intrin_rbtree_lft_rot(struct s_rbt_node **root, struct s_rbt_node *x)
{
	t_rbt_node	*y;

	if (!x || !x->rgt)
		return ;
	y = x->rgt;
	x->rgt = y->lft;
	if (x->rgt != NULL)
		x->rgt->up = x;
	y->up = x->up;
	if (x->up == NULL)
		(*root) = y;
	else if (x == x->up->lft)
		x->up->lft = y;
	else
		x->up->rgt = y;
	y->lft = x;
	x->up = y;
}
