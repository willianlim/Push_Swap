/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlist_add_first.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:44:13 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 20:31:20 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circlist_add_first(t_circlist *L, int val)
{
	t_circnode	*p;

	p = ft_circnode_create(val);
	if (ft_circlist_is_empty(L))
		L->end = p;
	else
	{
		p->next = L->begin;
		p->prev = L->end;
		L->begin->prev = p;
		L->end->next = p;
	}
	L->begin = p;
	L->size++;
}
