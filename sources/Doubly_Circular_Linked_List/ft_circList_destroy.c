/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_destroy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:24:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 03:58:45 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circList_destroy(CircList **L_ref)
{
	CircList	*L;
	CircNode	*p;
	CircNode	*aux;
	size_t		i;

	L = *L_ref;
	p = L->begin;
	aux = NULL;
	i = -1;
	while (++i < L->size)
	{
		aux = p;
		p = p->next;
		ft_circNode_destroy(&aux);
	}
	free (L);
	*L_ref = NULL;
}
