/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_others2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:48:34 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/10 16:50:17 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_others2(t_circlist *l, t_circlist *lb, size_t n)
{
	t_circnode	*p;
	t_rbt_tree	*tree;
	size_t		i;
	size_t		count_rotate;
	size_t		top_half_len;

	top_half_len = 0;
	if (n <= 3)
		return ;
	tree = ft_rbt_create();
	p = l->begin;
	i = -1;
	while (++i < n)
	{
		ft_rbt_insert(tree, p->val);
		p = p->next;
	}
	if (i > 1)
		ft_rbt_middle(tree->root, tree);
	else
	{
		ft_rbt_insert(tree, p->val);
		ft_rbt_middle(tree->root, tree);
	}
	l->val_pivot = tree->middle->data;
	p = l->begin;
	i = -1;
	count_rotate = 0;
	while (++i < n && l->size >= 3)
	{
		if (p->val < l->val_pivot)
		{
			p = p->next;
			ft_push_b(&l, &lb);
			top_half_len++;
		}
		else
		{
			p = p->next;
			ft_rotate_a(&l);
			count_rotate++;
		}
	}
	i = -1;
	while (++i < count_rotate)
		ft_reverse_rotate_a(&l);
	ft_sort_others2(l, lb, (count_rotate));
	ft_sort_three2(l);
	// if (l->size == top_half_len)
	// 	return ;
	// ft_circlist_print(l);
	// ft_circlist_print(lb);
	ft_rbt_freeall(tree);
	i = -1;
	while (++i < top_half_len)
		ft_push_a(&lb, &l);
	ft_sort_others2(l, lb, (top_half_len));
	ft_sort_three2(l);
}
