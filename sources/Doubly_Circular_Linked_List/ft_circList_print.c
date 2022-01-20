/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:28:32 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 18:06:11 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circlist_print(const t_circlist *l)
{
	t_circnode	*p;
	size_t		i;

	if (ft_circList_is_empty(l))
	{
		printf("L -> NULL\n");
		printf("L -> end -> NULL\n");
	}
	else
	{
		printf("L -> ");
		p = l->begin;
		i = -1;
		while (++i < l->size)
		{
			printf("%d -> ", p->val);
			p = p->next;
		}
		printf("\nL -> end -> %d\n", l->end->val);
	}
	printf("Size: %lu\n\n", l->size);
}
