/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operations.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 13:51:58 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/31 22:58:58 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OPERATIONS_H
# define FT_OPERATIONS_H

# include <stdio.h>

void	ft_push_a(t_circlist **from, t_circlist **to);
void	ft_push_b(t_circlist **from, t_circlist **to);
void	ft_swap_a(t_circlist **stack);
void	ft_swap_b(t_circlist **stack);
void	ft_swap_sa_sb(t_circlist **stack_a, t_circlist **stack_b);
void	ft_rotate_a(t_circlist **stack_a);
void	ft_rotate_b(t_circlist **stack_b);
void	ft_rotate_ra_rb(t_circlist **stack_a, t_circlist **stack_b);
void	ft_reverse_rotate_a(t_circlist **stack_a);
void	ft_reverse_rotate_b(t_circlist **stack_b);
void	ft_rra_rrb(t_circlist **stack_a, t_circlist **stack_b);

#endif
