/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_circ_list.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:37:15 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/20 17:41:09 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CIRC_LIST_H
# define FT_CIRC_LIST_H

# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>

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
	size_t		size;
}t_circlist;

void		ft_circList_add_first(t_circlist *L, int val);
void		ft_circList_add_last(t_circlist *L, int val);
t_circlist	*ft_circList_create(void);
void		ft_circList_destroy(t_circlist **L_ref);
void		ft_circList_inverted_print(const t_circlist *L);
bool		ft_circList_is_empty(const t_circlist *L);
void		ft_circList_print(const t_circlist *L);
void		ft_circList_remove(t_circlist *L, int val);
t_circnode	*ft_circNode_create(int val);
void		ft_circNode_destroy(t_circlist **cnode_ref);

#endif
