/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 09:35:40 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 17:17:13 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_sort_three(t_circlist *l)
{
	if (l->begin->val > l->begin->next->val && l->begin->val > l->end->val)
	{
		if (l->begin->next->val > l->end->val)
		{
			ft_swap_a(&l);
			ft_reverse_rotate_a(&l);
		}
		else
			ft_rotate_a(&l);
	}
	else if (l->begin->val > l->begin->next->val || l->begin->val > l->end->val)
	{
		if (l->begin->next->val > l->end->val)
			ft_reverse_rotate_a(&l);
		else
			ft_swap_a(&l);
	}
	else if (l->begin->val < l->begin->next->val && l->begin->val < l->end->val)
	{
		if (l->begin->next->val > l->end->val)
		{
			ft_swap_a(&l);
			ft_rotate_a(&l);
		}
	}
}
