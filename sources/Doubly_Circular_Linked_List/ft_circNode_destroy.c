/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circNode_destroy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 01:47:02 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 03:50:23 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_circ_list.h"

void	ft_circNode_destroy(CircNode **cnode_ref)
{
	CircNode	*cnode;

	cnode = *cnode_ref;
	free(cnode);
	*cnode_ref = NULL;
}
