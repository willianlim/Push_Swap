/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_remove.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:29:56 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 03:50:18 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circList_remove(CircList *L, int val)
{
	if (!ft_circList_is_empty(L))
	{
		CircNode	*p;
		if (L->begin->val == val)
		{
			p = L->begin;
			if (L->begin == L->end)
			{
				L->begin = NULL;
				L->end = NULL;
			}
			else
			{
				L->begin = p->next;
				L->begin->prev = L->end;
				L->end->next = L->begin;
			}
			ft_circNode_destroy(&p);
			L->size--;
		}
		else
		{
			p = L->begin->next;
			while (p != L->begin)
			{
				if (p->val == val)
				{
					if (L->end == p)
						L->end = p->prev;
					p->prev->next = p->next;
					p->next->prev = p->prev;
					ft_circNode_destroy(&p);
					L->size--;
					break ;
				}
				else
					p = p->next;
			}
		}
	}
}
