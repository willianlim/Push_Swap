/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlist_add_last.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:27:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/25 09:42:00 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_circ_list.h"

void	ft_circlist_add_last(t_circlist *L, int val)
{
	t_circnode	*p;

	p = ft_circnode_create(val);
	if (ft_circlist_is_empty(L))
		L->begin = p;
	else
	{
		p->prev = L->end;
		L->end->next = p;
		p->next = L->begin;
		L->begin->prev = p;
	}
	L->end = p;
	L->size++;
}
