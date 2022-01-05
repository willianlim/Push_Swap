/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_print.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:28:32 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 03:52:27 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circList_print(const CircList *L)
{
	if (ft_circList_is_empty(L))
	{
		printf("L -> NULL\n");
		printf("L -> end -> NULL\n");
	}
	else
	{
		CircNode	*p;
		size_t		i;

		printf("L -> ");
		p = L->begin;
		i = -1;
		while (++i < L->size)
		{
			printf("%d -> ", p->val);
			p = p->next;
		}
		printf("\nL -> end -> %d\n", L->end->val);
	}
	printf("Size: %lu\n\n", L->size);
}
