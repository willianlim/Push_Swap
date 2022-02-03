/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 10:48:05 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/02 21:26:13 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_pick_value(t_circlist *l, t_circlist *lb)
{
	ft_push_b(&l, &lb);
	ft_push_b(&l, &lb);
	ft_sort_three(l);
	l->minimum = l->begin;
	l->middle = l->begin->next;
	l->maximum = l->end;
}

void	ft_second_part(t_circlist *l, t_circlist *lb)
{
	if (lb->begin->val > lb->end->val && lb->end->val > l->middle->val && \
	lb->begin->val < l->maximum->val)
	{
		ft_reverse_rotate_a(&l);
		ft_push_a(&lb, &l);
		ft_push_a(&lb, &l);
		ft_rotate_a(&l);
		ft_rotate_a(&l);
		ft_rotate_a(&l);
		lb->size = 0;
	}
	else if (lb->begin->val < l->end->val && lb->end->val > l->end->val)
	{
		ft_reverse_rotate_a(&l);
		ft_push_a(&lb, &l);
		ft_rotate_a(&l);
		ft_rotate_a(&l);
	}
	else
	{
		ft_reverse_rotate_a(&l);
		ft_push_a(&lb, &l);
		ft_rotate_a(&l);
		ft_rotate_a(&l);
	}
}

void	ft_first_part(t_circlist *l, t_circlist *lb)
{
	if (lb->begin->val > lb->end->val && lb->end->val > l->begin->val && \
	lb->begin->val < l->middle->val)
	{
		ft_rotate_a(&l);
		ft_push_a(&lb, &l);
		ft_push_a(&lb, &l);
		ft_reverse_rotate_a(&l);
		lb->size = 0;
	}
	else if (lb->begin->val > l->begin->val && l->begin == l->minimum)
	{
		ft_push_a(&lb, &l);
		ft_swap_a(&l);
	}
}

void	ft_sort_five(t_circlist *l, t_circlist *lb)
{
	ft_pick_value(l, lb);
	if (lb->begin->val < lb->end->val && lb->end->val < l->middle->val)
		ft_swap_b(&lb);
	if (lb->begin->val < lb->end->val && lb->end->val > l->middle->val && \
	lb->begin->val < l->end->val)
		ft_swap_b(&lb);
	if (lb->begin->val > lb->end->val && lb->end->val > l->middle->val && \
	(lb->end->val > l->end->val || lb->begin->val > l->end->val))
		ft_swap_b(&lb);
	while (lb->size)
	{
		if (lb->begin->val < l->begin->val)
			ft_push_a(&lb, &l);
		else if (lb->begin->val > l->begin->val && \
		lb->begin->val < l->middle->val)
			ft_first_part(l, lb);
		else if (lb->begin->val > l->end->val)
		{
			ft_push_a(&lb, &l);
			ft_rotate_a(&l);
		}
		else if (lb->begin->val < l->end->val && \
		lb->begin->val > l->middle->val)
			ft_second_part(l, lb);
	}
}
