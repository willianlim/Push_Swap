/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:43:06 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/12 19:57:44 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

static void	ft_exit_invalid(t_circlist *l, t_rbt_tree *tree, int bol)
{
	ft_circlist_destroy(&l);
	ft_rbt_freeall(tree);
	if (bol == 1)
		printf("O valor passado não é um número válido\n");
	if (bol == 2)
		printf("O valor passado é duplicado\n");
}

static int	ft_verify_int(char *arr, int bol)
{
	int	i;

	i = 0;
	if (ft_strlen(arr) >= 10)
	{
		if (bol)
		{
			if (ft_strncmp(&arr[1], "2147483647", 11) > 0)
				return (0);
		}
		if (ft_strncmp(arr, "2147483647", 11) > 0)
			return (0);
	}
	return (1);
}

static int	ft_verify_argv(char *arr)
{
	int	i;
	int	bol;

	i = 0;
	bol = 0;
	while (arr[i] == '-' || arr[i] == '+')
	{
		bol++;
		if (bol > 1)
			return (0);
		i++;
	}
	while (arr[i] != '\0')
	{
		if (ft_isdigit(arr[i]))
			i++;
		else
			return (0);
	}
	return (ft_verify_int(arr, bol));
}

static int	ft_check(int argc, char *argv[], t_circlist *l, t_rbt_tree *tree)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (ft_verify_argv(argv[i]))
		{
			ft_circlist_add_last(l, ft_atoi(argv[i]));
			if (!ft_rbt_insert(tree, ft_atoi(argv[i])))
			{
				ft_exit_invalid(l, tree, 2);
				return (0);
			}
		}
		else
		{
			ft_exit_invalid(l, tree, 1);
			return (0);
		}
	}
	return (1);
}

int	ft_push_swap(int argc, char *argv[])
{
	t_circlist	*l;
	t_circlist	*lb;
	t_rbt_tree	*tree;

	if (argc == 1)
	{
		printf("é necessário mais argumentos\n");
		return (0);
	}
	l = ft_circlist_create();
	tree = ft_rbt_create();
	if (!ft_check(argc, argv, l, tree))
		return (0);
	lb = ft_circlist_create();
	if (l->size <= 3)
		ft_sort_three(l);
	if (l->size > 3 && l->size <= 5)
		ft_sort_five(l, lb);
	if (l->size > 5)
		ft_sort_others3(l, lb, l->size, 0);
	// ft_circlist_print(l);
	// ft_circlist_print(lb);
	ft_circlist_destroy(&l);
	ft_circlist_destroy(&lb);
	ft_rbt_freeall(tree);
	return (1);
}
