/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_maximum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:27:00 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:14:10 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_rbt_maximun(t_rbt_tree *tree)
{
	t_rbt_node	*aux;

	aux = tree->root;
	while (aux->right != NULL)
		aux = aux->right;
	tree->maximum = aux;
}
