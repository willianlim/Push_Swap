/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circNode_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:30:50 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 01:46:46 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

CircNode	*ft_circNode_create(int val)
{
	CircNode	*cnode;

	cnode = (CircNode *)malloc(sizeof(CircNode));
	cnode->next = cnode;
	cnode->prev = cnode;
	cnode->val = val;
	return (cnode);
}
