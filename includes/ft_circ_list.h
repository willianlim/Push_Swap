/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circ_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:37:15 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 12:32:57 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CIRC_LIST_H
# define FT_CIRC_LIST_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

typedef struct s_circnode
{
	int					val;
	struct s_circnode	*prev;
	struct s_circnode	*next;
}t_circnode;

typedef struct s_circlist
{
	t_circnode	*begin;
	t_circnode	*end;
	t_circnode	*minimum;
	t_circnode	*middle;
	t_circnode	*maximum;
	size_t		size;
}t_circlist;

void		ft_circlist_add_first(t_circlist *l, int val);
void		ft_circlist_add_last(t_circlist *l, int val);
t_circlist	*ft_circlist_create(void);
void		ft_circlist_destroy(t_circlist **l_ref);
void		ft_circlist_inverted_print(const t_circlist *l);
bool		ft_circlist_is_empty(const t_circlist *l);
void		ft_circlist_print(const t_circlist *l);
void		ft_circlist_remove(t_circlist *l, int val);
t_circnode	*ft_circnode_create(int val);
void		ft_circnode_destroy(t_circnode **cnode_ref);

#endif
