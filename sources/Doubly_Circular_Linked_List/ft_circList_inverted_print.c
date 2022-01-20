/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_inverted_print.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:29:06 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 18:05:38 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circlist_inverted_print(const t_circlist *L)
{
	t_circnode	*p;
	size_t		i;

	if (ft_circlist_is_empty(L))
	{
		printf("L -> NULL\n");
		printf("L -> end -> NULL\n");
	}
	else
	{
		printf("L -> ");
		p = L->end;
		i = -1;
		while (++i < L->size)
		{
			printf("%d -> ", p->val);
			p = p->prev;
		}
		printf("\nL -> begin -> %d\n", L->begin->val);
	}
	printf("Size: %lu\n\n", L->size);
}
