#ifndef FT_CIRC_LIST_H
#define FT_CIRC_LIST_H

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct _circ_node
{
	int					val;
	struct _circ_node	*prev;
	struct _circ_node	*next;
}CircNode;

typedef struct _circ_list
{
	CircNode	*begin;
	CircNode	*end;
	size_t		size;
}CircList;

void		ft_circList_add_first(CircList *L, int val);
void		ft_circList_add_last(CircList *L, int val);
CircList	*ft_circList_create();
void		ft_circList_destroy(CircList **L_ref);
void		ft_circList_inverted_print(const CircList *L);
bool		ft_circList_is_empty(const CircList *L);
void		ft_circList_print(const CircList *L);
void		ft_circList_remove(CircList *L, int val);
CircNode	*ft_circNode_create(int val);
void		ft_circNode_destroy(CircNode **cnode_ref);

#endif
