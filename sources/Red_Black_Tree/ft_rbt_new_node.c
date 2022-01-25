/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_new_node.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:15:27 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/21 10:47:47 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

t_rbt_node	*ft_rbt_new_node(int data)
{
	t_rbt_node	*new;

	new = (t_rbt_node *)malloc(sizeof(t_rbt_node));
	new->data = data;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	new->color = RED;
	return (new);
}
