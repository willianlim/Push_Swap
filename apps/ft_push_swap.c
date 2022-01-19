// #include "../includes/ft_circ_list.h"

// #define SIZE 5000000

// int	main(void)
// {
// 	CircList	*L;
// 	int			i;

// 	i = -1;
// 	L = ft_circList_create();
// 	while (++i < SIZE)
// 		ft_circList_add_first(L, rand());
// 	ft_circList_print(L);

	// puts("empty list");
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 99");
	// ft_circList_remove(L, 99);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("adding last 10, 2, 7, 4, 5, 7");
	// ft_circList_add_last(L, 10);
	// ft_circList_add_last(L, 2);
	// ft_circList_add_last(L, 7);
	// ft_circList_add_last(L, 4);
	// ft_circList_add_last(L, 5);
	// ft_circList_add_last(L, 7);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 99");
	// ft_circList_remove(L, 99);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 10");
	// ft_circList_remove(L, 10);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 2");
	// ft_circList_remove(L, 2);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 7");
	// ft_circList_remove(L, 7);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 4");
	// ft_circList_remove(L, 4);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 5");
	// ft_circList_remove(L, 5);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// puts("remove 7");
	// ft_circList_remove(L, 7);
	// ft_circList_print(L);
	// ft_circList_inverted_print(L);

	// ft_circList_destroy(&L);

// 	return (0);
// }

#include "../includes/ft_rbtree.h"
#define NB_ELEMS 10000

int	main(int argc, char *argv[])
{
	t_rbt_node	*root;
	int		i;

	root = NULL;
	rbt_insert(&root, 10);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 18);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 7);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 15);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 16);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 30);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 25);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 40);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 60);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 2);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 1);
	rbt_print(root);
	puts("");
	rbt_insert(&root, 70);

	// i = -1;
	// while (++i < NB_ELEMS)
	// 	rbt_insert(&root, rand());
	rbt_print(root);
	puts("");
	return (0);
}
