/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_new_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:11:55 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/05 23:13:28 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_binary_tree.h"

Node	*ft_new_node(int val)
{
	Node	*new;

	new = (Node *)malloc(sizeof(Node));
	new->val = val;
	new->left = NULL;
	new->right = NULL;
	return (new);
}
