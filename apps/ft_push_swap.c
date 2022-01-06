// #include "../includes/ft_circ_list.h"

// int	main(void)
// {
// 	CircList	*L;

// 	L = ft_circList_create();

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

#include "../includes/ft_binary_tree.h"

int	main(void)
{
	int		op;
	int		val;
	Tree	t;
	int		i;

	t.root = NULL;
	i = 10;
	while (i)
	{
		printf("\n0 - Sair\n1 - Inserir\n2 - Imprimir\n");
		scanf("%d", &op);

		switch (op)
		{
		case 0:
			printf("\nSaindo ...\n");
			i = 0;
			break;
		case 1:
			printf("Digite um valor: ");
			scanf("%d", &val);
			t.root = ft_new_version_insert(t.root, val);
			// ft_insert_node(&t, val);
			break ;
		case 2:
			printf("\nImpressão da árvore binária: \n");
			ft_tree_print(t.root);
			puts("");
			break ;
		default:
			i = 0;
			break;
		}
	}
	return (0);
}
