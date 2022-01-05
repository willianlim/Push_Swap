/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_add_first.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:44:13 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 03:49:38 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circList_add_first(CircList *L, int val)
{
	CircNode	*p;

	p = ft_circNode_create(val);
	if (ft_circList_is_empty(L))
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
