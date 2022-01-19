/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   intrin_insert_fixup.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:41:12 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/19 16:05:57 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

int	uncle_is_red(t_rbt_node *z)
{
	t_rbt_node	*y;

	y = z->up->up;
	if (z->up == y->lft)
		y = y->rgt;
	else
		y = y->lft;
	if (y && y->col == RED)
	{
		y->col = BLACK;
		z->up->col = BLACK;
		z->up->up->col = RED;
		z = z->up->up;
		return (1);
	}
	else
		return (0);
}

void	case_lft(t_rbt_node **root, t_rbt_node *z)
{
	char	tmp_col;

	if (z == z->up->lft)
	{
		tmp_col = z->up->col;
		z->up->col = z->up->up->col;
		z->up->up->col = tmp_col;
		intrin_rbtree_rgt_rot(root, z->up->up);
	}
	else
	{
		tmp_col = z->col;
		z->col = z->up->up->col;
		z->up->up->col = tmp_col;
		intrin_rbtree_lft_rot(root, z->up);
		intrin_rbtree_rgt_rot(root, z->up);
	}
}

void	case_rgt(t_rbt_node **root, t_rbt_node *z)
{
	char	tmp_col;

	if (z == z->up->rgt)
	{
		tmp_col = z->up->col;
		z->up->col = z->up->up->col;
		z->up->up->col = tmp_col;
		intrin_rbtree_lft_rot(root, z->up->up);
	}
	else
	{
		tmp_col = z->col;
		z->col = z->up->up->col;
		z->up->up->col = tmp_col;
		intrin_rbtree_rgt_rot(root, z->up);
		intrin_rbtree_lft_rot(root, z->up);
	}
}

void	intrin_insert_fixup(t_rbt_node **root, t_rbt_node *z)
{
	while (z != *root && z->up != *root && z->up->col == RED && z->col == RED)
	{
		if (uncle_is_red(z))
		{
			z = z->up->up;
			continue ;
		}
		else if (z->up == z->up->up->lft)
			case_lft(root, z);
		else if (z->up == z->up->up->rgt)
			case_rgt(root, z);
	}
	(*root)->col = BLACK;
}
