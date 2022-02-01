/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circlist_remove.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:29:56 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/25 09:41:27 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_circ_list.h"

void	ft_circlist_remove(t_circlist *l, int val)
{
	t_circnode	*p;

	if (!ft_circlist_is_empty(l))
	{
		if (l->begin->val == val)
		{
			p = l->begin;
			if (l->begin == l->end)
			{
				l->begin = NULL;
				l->end = NULL;
			}
			else
			{
				l->begin = p->next;
				l->begin->prev = l->end;
				l->end->next = l->begin;
			}
			ft_circnode_destroy(&p);
			l->size--;
		}
		else
		{
			p = l->begin->next;
			while (p != l->begin)
			{
				if (p->val == val)
				{
					if (l->end == p)
						l->end = p->prev;
					p->prev->next = p->next;
					p->next->prev = p->prev;
					ft_circnode_destroy(&p);
					l->size--;
					break ;
				}
				else
					p = p->next;
			}
		}
	}
}
