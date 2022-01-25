/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate_a.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:52:54 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/24 20:56:59 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_reverse_rotate_a(t_circlist **stack_a)
{
	if (ft_circlist_is_empty(*stack_a) || (*stack_a)->begin == (*stack_a)->end)
		return ;
	(*stack_a)->end = (*stack_a)->end->prev;
	(*stack_a)->begin = (*stack_a)->end->next;
}
