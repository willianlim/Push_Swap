/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_add_last.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:27:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 01:50:54 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circList_add_last(CircList *L, int val)
{
	CircNode	*p;

	p = ft_circNode_create(val);
	if (ft_circList_is_empty(L))
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
