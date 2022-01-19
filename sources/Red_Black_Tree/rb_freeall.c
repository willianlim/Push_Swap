/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_freeall.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:18:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/18 11:22:47 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

static void	recur_free(t_rbt_node *start)
{
	t_rbt_node	*tmp;

	while (start->lft || start->rgt)
	{
		if (start->lft)
			start = start->lft;
		else
			start = start->rgt;
	}
	tmp = start->up;
	free(start);
	if (tmp)
	{
		if (start == tmp->lft)
			tmp->lft = NULL;
		else
			tmp->rgt = NULL;
		recur_free(tmp);
	}
}

void	rb_freeall(t_rbt_node **root)
{
	recur_free(*root);
	*root = NULL;
}
