/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 09:43:06 by wrosendo          #+#    #+#             */
/*   Updated: 2022/01/31 22:56:22 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_push_swap.h"

int	ft_verify_int(char *arr, int bol)
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

int	ft_verify_argv(char *arr)
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
		if (arr[i] >= '0' && arr[i] <= '9')
			i++;
		else
			return (0);
		if (arr[i] == '\0')
			break ;
	}
	return (ft_verify_int(arr, bol));
}

void	ft_exit_invalid(t_circlist *l, t_rbt_tree *tree, int bol)
{
	ft_circlist_destroy(&l);
	ft_rbt_freeall(tree);
	if (bol == 1)
		printf("O valor passado não é um número válido\n");
	if (bol == 2)
		printf("O valor passado é duplicado\n");
}

void	ft_check(int argc, char *argv[], t_circlist *l, t_rbt_tree *tree)
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
				return ;
			}
		}
		else
		{
			ft_exit_invalid(l, tree, 1);
			return ;
		}
	}
}

void	ft_push_swap(int argc, char *argv[])
{
	t_circlist	*l;
	t_rbt_tree	*tree;

	l = ft_circlist_create();
	tree = ft_rbt_create();
	if (argc == 1)
		printf("é necessário mais argumentos\n");
	ft_check(argc, argv, l, tree);
	if (l->size <= 5)
		// chamar função para resolver com 5 elementos
	else if (l->size <= 20)
		// chamar funçaõ para resolver com até 20 elementos
	// ft_rbt_print(tree->root);
}
