/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:28:48 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 19:56:48 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_a(t_circlist **stack)
{
	if (ft_circlist_is_empty(*stack) || (*stack)->begin == (*stack)->end)
		return ;
	if ((*stack)->begin->next == (*stack)->end && \
	(*stack)->end->next == (*stack)->begin)
	{
		(*stack)->begin = (*stack)->end;
		(*stack)->end = (*stack)->end->next;
	}
	else
	{
		(*stack)->begin->next->prev = (*stack)->end;
		(*stack)->end->next = (*stack)->begin->next;
		(*stack)->begin->next = (*stack)->begin->next->next;
		(*stack)->begin->next->prev = (*stack)->begin;
		(*stack)->end->next->next = (*stack)->begin;
		(*stack)->begin->prev = (*stack)->end->next;
		(*stack)->begin = (*stack)->end->next;
	}
	ft_putstr_fd("sa\n", STDOUT_FILENO);
}
