/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_sa_sb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:32:49 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/24 17:41:22 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_swap_sa_sb(t_circlist **stack_a, t_circlist **stack_b)
{
	ft_swap_a(stack_a);
	ft_swap_b(stack_b);
}
