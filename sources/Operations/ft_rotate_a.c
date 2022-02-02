/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:39:31 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 19:54:59 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_a(t_circlist **stack_a)
{
	if (ft_circlist_is_empty(*stack_a) || (*stack_a)->begin == (*stack_a)->end)
		return ;
	(*stack_a)->begin = (*stack_a)->begin->next;
	(*stack_a)->end = (*stack_a)->begin->prev;
	ft_putstr_fd("ra\n", STDOUT_FILENO);
}
