/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_ra_rb.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 20:48:53 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/25 09:15:03 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

void	ft_rotate_ra_rb(t_circlist **stack_a, t_circlist **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}
