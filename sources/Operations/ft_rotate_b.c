/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:46:25 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 19:55:07 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_b(t_circlist **stack_b)
{
	if (ft_circlist_is_empty(*stack_b) || (*stack_b)->begin == (*stack_b)->end)
		return ;
	(*stack_b)->begin = (*stack_b)->begin->next;
	(*stack_b)->end = (*stack_b)->begin->prev;
	ft_putstr_fd("rb\n", STDOUT_FILENO);
}
