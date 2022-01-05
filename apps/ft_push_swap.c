#include "../includes/ft_circ_list.h"

int	main(void)
{
	CircList	*L;

	L = ft_circList_create();

	puts("empty list");
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 99");
	ft_circList_remove(L, 99);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("adding last 10, 2, 7, 4, 5, 7");
	ft_circList_add_last(L, 10);
	ft_circList_add_last(L, 2);
	ft_circList_add_last(L, 7);
	ft_circList_add_last(L, 4);
	ft_circList_add_last(L, 5);
	ft_circList_add_last(L, 7);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 99");
	ft_circList_remove(L, 99);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 10");
	ft_circList_remove(L, 10);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 2");
	ft_circList_remove(L, 2);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 7");
	ft_circList_remove(L, 7);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 4");
	ft_circList_remove(L, 4);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 5");
	ft_circList_remove(L, 5);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	puts("remove 7");
	ft_circList_remove(L, 7);
	ft_circList_print(L);
	ft_circList_inverted_print(L);

	ft_circList_destroy(&L);

	return (0);
}
