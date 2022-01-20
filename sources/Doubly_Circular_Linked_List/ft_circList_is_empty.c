/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circList_is_empty.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:26:23 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:56:47 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

bool	ft_circlist_is_empty(const t_circlist *l)
{
	return (l->size == 0);
}
