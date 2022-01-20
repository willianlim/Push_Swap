/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_minimum.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 17:09:59 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:45:04 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

void	ft_rbt_minimun(t_rbt_tree *tree)
{
	t_rbt_node	*aux;

	aux = tree->root;
	while (aux->left != NULL)
		aux = aux->left;
	tree->minimum = aux;
}
