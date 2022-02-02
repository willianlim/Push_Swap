/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbt_create.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 14:07:01 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 10:40:08 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_rbtree.h"

t_rbt_tree	*ft_rbt_create(void)
{
	t_rbt_tree	*tree;

	tree = (t_rbt_tree *)malloc(sizeof(t_rbt_tree));
	tree->root = NULL;
	tree->minimum = NULL;
	tree->middle = NULL;
	tree->maximum = NULL;
	tree->size = 0;
	tree->count = -1;
	return (tree);
}
