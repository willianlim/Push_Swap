/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:50:26 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 01:50:28 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

CircList	*ft_circList_create()
{
	CircList	*L;

	L = (CircList *)malloc(sizeof(CircList));
	L->begin = NULL;
	L->end = NULL;
	L->size = 0;
	return (L);
}
