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

// #include "../includes/ft_rbtree.h"
// #define NB_ELEMS 10000

// int	main(int argc, char *argv[])
// {
// 	t_rbt_tree	*tree;
// 	int			i;

// 	tree = ft_rbt_create();
// 	ft_rbt_insert(tree, 10);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 18);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 7);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 15);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 16);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 30);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 25);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 40);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 60);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 2);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 1);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");
// 	ft_rbt_insert(tree, 70);
// 	ft_rbt_print(tree->root);
// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);
// 	puts("");

// 	ft_rbt_minimun(tree);
// 	printf("O menor valor dessa árvore é: %d\n", tree->minimum->data);
// 	ft_rbt_maximun(tree);
// 	printf("O maior valor dessa árvore é: %d\n", tree->maximum->data);

// 	ft_rbt_middle(tree->root, tree);
// 	printf("Esse é o elemento do meio: %d\n", tree->middle->data);
// 	ft_rbt_freeall(tree);
// 	return (0);
// }

#include "../includes/ft_circ_list.h"
#include "../includes/ft_rbtree.h"
#include "../includes/ft_push_swap.h"
#include <stdio.h>
#include <stdlib.h>

// int	main(int argc, char *argv[])
// {
// 	t_circlist	*l;
// 	t_rbt_tree	*tree;
// 	int			i;

// 	i = 0;
// 	l = ft_circlist_create();
// 	tree = ft_rbt_create();
// 	while (++i < argc)
// 		ft_circlist_add_last(l, atoi(argv[i]));
// 	i = 0;
// 	while (++i < argc)
// 		ft_rbt_insert(tree, atoi(argv[i]));
// 	ft_rbt_print(tree->root);
// 	ft_rbt_middle(tree->root, tree);
// 	printf("\nO tamanho da árvore é: %lu\n", tree->size);
// 	printf("\nO elemento mediano é: %d\n", tree->middle->data);
// 	return (0);
// }

// int	main(void)
// {
// 	t_circlist	*stack_a;
// 	t_circlist	*stack_b;
// 	int			i;

// 	i = -1;
// 	stack_a = ft_circlist_create();
// 	stack_b = ft_circlist_create();
// 	while (++i < 3)
// 	{
// 		ft_circlist_add_first(stack_a, i);
// 	}
// 	ft_push_swap_a(&stack_a, &stack_b);

// 	return (0);
// }

// int main(void)
// {
// 	t_circlist	*stack_a;
// 	t_circlist	*stack_b;
// 	int			i;

// 	i = 1;
// 	stack_a = ft_circlist_create();
// 	stack_b = ft_circlist_create();

// 	printf("caso %d\n", i);
// 	ft_push_b(&stack_a, &stack_b);

// 	printf("caso %d\n", i);
// 	ft_circlist_add_last(stack_a, 7);
// 	printf("\nstack_a\n");
// 	ft_circlist_print(stack_a);
// 	printf("\nstack_b\n");
// 	ft_circlist_print(stack_b);
// 	ft_push_b(&stack_a, &stack_b);
// 	printf("ft_push_b\n");
// 	printf("\nstack_a\n");
// 	ft_circlist_print(stack_a);
// 	printf("\nstack_b\n");
// 	ft_circlist_print(stack_b);

// 	printf("caso %d\n", i);
// 	ft_circlist_add_last(stack_a, 10);
// 	ft_circlist_add_last(stack_a, 14);
// 	ft_circlist_add_last(stack_a, 9);
// 	ft_circlist_add_last(stack_a, 8);
// 	printf("\nstack_a\n");
// 	ft_circlist_print(stack_a);
// 	printf("\nstack_b\n");
// 	ft_circlist_print(stack_b);

// 	ft_push_b(&stack_a, &stack_b);
// 	printf("ft_push_b\n");
// 	printf("\nstack_a\n");
// 	ft_circlist_print(stack_a);
// 	printf("\nstack_b\n");
// 	ft_circlist_print(stack_b);

// 	ft_push_b(&stack_a, &stack_b);
// 	printf("ft_push_b\n");
// 	printf("\nstack_a\n");
// 	ft_circlist_print(stack_a);
// 	printf("\nstack_b\n");
// 	ft_circlist_print(stack_b);

// 	return (0);
// }

int	main(void)
{
	t_circlist	*stack_a;
	t_circlist	*stack_b;
	int			i;

	i = 0;
	stack_a = ft_circlist_create();
	stack_b = ft_circlist_create();

	// ========= caso 1 ========= //
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);

	// ========= caso 2 ========= //
	ft_circlist_add_last(stack_a, 10);
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);

	// ========= caso 3 ========= //
	ft_circlist_add_last(stack_a, 3);
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);

	// ========= caso 4 ========= //
	ft_circlist_add_last(stack_a, 7);
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);

	// ========= caso 5 ========= //
	ft_circlist_add_last(stack_a, 9);
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);

	// ========= caso 6 ========= //
	ft_circlist_add_last(stack_a, 66);
	printf("\nantes stack a %d\n", ++i);
	ft_circlist_print(stack_a);
	printf("depois stack a %d\n", i);
	ft_rotate_b(&stack_a);
	ft_circlist_print(stack_a);
	return (0);
}









