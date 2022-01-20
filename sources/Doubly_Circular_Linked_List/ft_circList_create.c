/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:50:26 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:59:45 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

t_circlist	*ft_circlist_create(void)
{
	t_circlist	*l;

	l = (t_circlist *)malloc(sizeof(t_circlist));
	l->begin = NULL;
	l->end = NULL;
	l->size = 0;
	return (l);
}
