/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrosendo <wrosendo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 10:39:28 by wrosendo          #+#    #+#             */
/*   Updated: 2022/02/01 17:15:08 by wrosendo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "ft_circ_list.h"
# include "ft_rbtree.h"
# include "ft_operations.h"
# include "../libft/libft.h"

# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>

int		ft_push_swap(int argc, char *argv[]);
void	ft_sort_three(t_circlist *l);
void	ft_sort_five(t_circlist *l, t_circlist *lb);

#endif
