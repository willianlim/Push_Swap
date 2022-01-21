/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circNode_create.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:30:50 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:57:13 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

t_circnode	*ft_circnode_create(int val)
{
	t_circnode	*cnode;

	cnode = (t_circnode *)malloc(sizeof(t_circnode));
	cnode->next = cnode;
	cnode->prev = cnode;
	cnode->val = val;
	return (cnode);
}
