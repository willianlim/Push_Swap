/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:11:02 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 19:54:32 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_stackfrom_unitary(t_circlist **from, t_circlist **to)
{
	if ((*to)->begin == NULL && (*to)->end == NULL)
		(*to)->end = (*from)->end;
	else
	{
		(*to)->begin->prev = (*from)->begin;
		(*to)->end->next = (*from)->begin;
		(*from)->begin->next = (*to)->begin;
		(*from)->begin->prev = (*to)->end;
	}
	(*to)->begin = (*from)->begin;
	(*from)->begin = NULL;
	(*from)->end = NULL;
}

static void	ft_stackfrom_several(t_circlist **from, t_circlist **to)
{
	if ((*to)->begin == NULL && (*to)->end == NULL)
	{
		(*to)->end = (*from)->begin;
		(*to)->begin = (*from)->begin;
		(*from)->begin = (*from)->begin->next;
	}
	else
	{
		(*to)->end->next = (*from)->begin;
		(*to)->begin->prev = (*from)->begin;
		(*from)->begin = (*from)->begin->next;
		(*from)->begin->prev->next = (*to)->begin;
		(*to)->begin = (*from)->begin->prev;
		(*to)->begin->prev = (*to)->end;
	}
	(*from)->end->next = (*from)->begin;
	(*from)->begin->prev = (*from)->end;
}

void	ft_push_b(t_circlist **from, t_circlist **to)
{
	if (ft_circlist_is_empty(*from))
		return ;
	if ((*from)->begin == (*from)->end)
		ft_stackfrom_unitary(from, to);
	else
		ft_stackfrom_several(from, to);
	(*from)->size--;
	(*to)->size++;
	ft_putstr_fd("pb\n", STDOUT_FILENO);
}
