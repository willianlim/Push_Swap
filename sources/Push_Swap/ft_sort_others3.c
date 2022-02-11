/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_others3.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 15:48:34 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/11 16:37:24 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_find_middle(t_rbt_tree	*tree, t_circlist *l, size_t n)
{
	t_circnode	*p;
	size_t		i;

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
}

size_t	ft_a_to_b(t_circlist *l, t_circlist *lb, size_t n, int bol)
{
	t_circnode	*p;
	size_t		top_half_len;
	size_t		i;

	// t_rbt_tree	*tree;

	// tree = ft_rbt_create();
	// ft_find_middle(tree, l, n);

	// tree = ft_rbt_create();

	l->count_rotate = 0;
	top_half_len = 0;
	p = l->begin;
	i = -1;
	while (++i <= n && l->size >= 3)
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
			l->count_rotate++;
		}
	}
	i = -1;
	if (bol)
	{
		while (++i < l->count_rotate)
			ft_reverse_rotate_a(&l);
		// while (l->count_rotate > 3)
		// {
		// 	tree = ft_rbt_create();
		// 	ft_find_middle(tree, l, l->count_rotate);
		// 	ft_a_to_b(l, lb, l->count_rotate, bol);
		// 	ft_rbt_freeall(tree);
		// }
		// return (top_half_len);
	}
	// ft_rbt_freeall(tree);
	return (top_half_len);
}

// size_t	ft_b_to_a(t_circlist *l, t_circlist *lb, size_t n, int bol)
// {
// 	t_circnode	*p;
// 	size_t		top_half_len;
// 	size_t		i;

// 	lb->count_rotate = 0;
// 	top_half_len = 0;
// 	p = l->begin;
// 	i = -1;
// 	while (++i < n)
// 	{
// 		if (p->val >= l->val_pivot)
// 		{
// 			p = p->next;
// 			ft_push_a(&l, &lb);
// 			top_half_len++;
// 		}
// 		else
// 		{
// 			p = p->next;
// 			ft_rotate_b(&l);
// 			lb->count_rotate++;
// 		}
// 	}
// 	i = -1;
// 	if (bol)
// 	{
// 		while (++i < lb->count_rotate)
// 			ft_reverse_rotate_a(&l);
// 	}
// 	return (top_half_len);
// }

void	ft_sort_others3(t_circlist *l, t_circlist *lb, size_t n, int bol)
{
	t_rbt_tree	*tree;
	size_t		top_half_len;
	size_t		i;

	if (n <= 3)
		return ;
	top_half_len = 0;
	tree = ft_rbt_create();
	ft_find_middle(tree, l, n);
	// if (bol)
	// 	top_half_len = ft_b_to_a(lb, l, n, bol);
	// else
	// 	top_half_len = ft_a_to_b(l, lb, n, bol);
	top_half_len = ft_a_to_b(l, lb, n, bol);
	ft_sort_others3(l, lb, l->count_rotate, bol);
	ft_sort_three2(l);
	// if (l->size == l->top_half_len)
	// 	return ;
	// ft_circlist_print(l);
	// ft_circlist_print(lb);
	ft_rbt_freeall(tree);
	i = -1;
	while (++i < top_half_len)
		ft_push_a(&lb, &l);

	ft_sort_others3(l, lb, top_half_len, 1);

	// top_half_len = ft_b_to_a(lb, l, top_half_len, 1);
	// ft_sort_others3(l, lb, top_half_len, 1);

	ft_sort_three2(l);
}
