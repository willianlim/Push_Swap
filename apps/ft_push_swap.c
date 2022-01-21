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

// 	puts("empty list");
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 99");
// 	ft_circList_remove(L, 99);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("adding last 10, 2, 7, 4, 5, 7");
// 	ft_circList_add_last(L, 10);
// 	ft_circList_add_last(L, 2);
// 	ft_circList_add_last(L, 7);
// 	ft_circList_add_last(L, 4);
// 	ft_circList_add_last(L, 5);
// 	ft_circList_add_last(L, 7);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 99");
// 	ft_circList_remove(L, 99);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 10");
// 	ft_circList_remove(L, 10);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 2");
// 	ft_circList_remove(L, 2);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 7");
// 	ft_circList_remove(L, 7);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 4");
// 	ft_circList_remove(L, 4);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 5");
// 	ft_circList_remove(L, 5);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	puts("remove 7");
// 	ft_circList_remove(L, 7);
// 	ft_circList_print(L);
// 	ft_circList_inverted_print(L);

// 	ft_circList_destroy(&L);

// 	return (0);
// }

#include "../includes/ft_rbtree.h"
#define NB_ELEMS 10000

int	main(int argc, char *argv[])
{
	t_rbt_tree	*tree;
	int			i;

	tree = ft_rbt_create();
	ft_rbt_insert(tree, 10);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 18);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 7);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 15);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 16);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 30);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 25);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 40);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 60);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 2);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 1);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");
	ft_rbt_insert(tree, 70);
	ft_rbt_print(tree->root);
	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
	puts("");

	ft_rbt_minimun(tree);
	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
	ft_rbt_maximun(tree);
	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);

	ft_rbt_middle(tree->root, tree);
	printf("Esse é o elemento do meio: %d\n", tree->middle->data);
	ft_rbt_freeall(tree);
	return (0);
}
