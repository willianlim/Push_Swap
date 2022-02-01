/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbtree.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:35:12 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/31 22:59:05 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RBTREE_H
# define FT_RBTREE_H

# include <stdio.h>
# include <stdlib.h>

# define BLACK 'B'
# define RED 'R'

typedef struct s_rbt_node
{
	int					data;
	char				color;
	struct s_rbt_node	*left;
	struct s_rbt_node	*right;
	struct s_rbt_node	*parent;
}t_rbt_node;

typedef struct s_rbt_tree
{
	size_t		count;
	size_t		size;
	t_rbt_node	*root;
	t_rbt_node	*minimum;
	t_rbt_node	*middle;
	t_rbt_node	*maximum;
}t_rbt_tree;

void		ft_intrin_insert_fixup(t_rbt_tree *tree, t_rbt_node *new);
void		ft_intrin_rbtree_lft_rot(t_rbt_tree *tree, t_rbt_node *x);
void		ft_intrin_rbtree_rgt_rot(t_rbt_tree *tree, t_rbt_node *y);
t_rbt_tree	*ft_rbt_create(void);
void		ft_rbt_freeall(t_rbt_tree *tree);
int			ft_rbt_insert(t_rbt_tree *tree, int data);
void		ft_rbt_maximun(t_rbt_tree *tree);
void		ft_rbt_middle(t_rbt_node *root, t_rbt_tree *tree);
void		ft_rbt_minimun(t_rbt_tree *tree);
t_rbt_node	*ft_rbt_new_node(int data);
void		ft_rbt_print(t_rbt_node *root);

#endif
