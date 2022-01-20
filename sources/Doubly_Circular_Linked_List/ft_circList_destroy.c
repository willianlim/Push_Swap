/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_destroy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:24:43 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:55:29 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circlist_destroy(t_circlist **l_ref)
{
	t_circlist	*l;
	t_circnode	*p;
	t_circnode	*aux;
	size_t		i;

	l = *l_ref;
	p = l->begin;
	aux = NULL;
	i = -1;
	while (++i < l->size)
	{
		aux = p;
		p = p->next;
		ft_circnode_destroy(&aux);
	}
	free (L);
	*l_ref = NULL;
}
