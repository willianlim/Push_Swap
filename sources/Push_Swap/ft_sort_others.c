/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_others.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:48:34 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/05 11:20:49 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_others(t_circlist *l, t_circlist *lb, int pivot, size_t n)
{
	t_circnode	*p;
	t_rbt_tree	*tree;
	size_t		i;
	size_t		top_half_len;

	top_half_len = 0;
	if (n == 1)
		return ;
	tree = ft_rbt_create();
	l->val_pivot = pivot;
	p = l->begin;
	i = -1;
	while (++i < n)
	{
		if (p->val > l->val_pivot)
		{
			p = p->next;
			ft_push_b(&l, &lb);
			top_half_len++;
		}
		else if (p->val == l->val_pivot)
		{
			p = p->next;
			ft_push_b(&l, &lb);
			if (!ft_circlist_is_empty(lb))
				ft_rotate_b(&lb);
			top_half_len++;
		}
		else
		{
			p = p->next;
			ft_rotate_a(&l);
		}
	}
	i = -1;
	while (++i < (n - top_half_len))
		ft_reverse_rotate_a(&l);
	i = -1;
	ft_reverse_rotate_b(&lb);
	while (++i < top_half_len)
		ft_push_a(&lb, &l);
	if (ft_circlist_is_empty(lb))
	{
		p = l->begin;
		i = 0;
		while (++i < top_half_len)
		{
			ft_rbt_insert(tree, p->val);
			p = p->next;
		}
		ft_rbt_middle(tree->root, tree);
	}
	ft_sort_others(l, lb, tree->middle->data, (top_half_len - 1));
	ft_rbt_freeall(tree);
	tree = ft_rbt_create();
	i = -1;
	while (++i < top_half_len)
		ft_rotate_a(&l);
	if (ft_circlist_is_empty(lb))
	{
		p = l->begin;
		i = 0;
		while (++i < top_half_len)
		{
			ft_rbt_insert(tree, p->val);
			p = p->next;
		}
		ft_rbt_middle(tree->root, tree);
	}
	ft_sort_others(l, lb, tree->middle->data, (n - top_half_len));
	i = -1;
	while (++i < top_half_len)
		ft_reverse_rotate_a(&l);
	ft_rbt_freeall(tree);
}
