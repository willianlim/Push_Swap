#include "ft_push_swap.h"

void	ft_sort_three2(t_circlist *l)
{
	if (l->begin->val > l->begin->next->val && l->begin->val > l->begin->next->next->val)
	{
		if (l->begin->next->val > l->begin->next->next->val)
		{
			ft_swap_a(&l);
			ft_rotate_a(&l);
			ft_swap_a(&l);
			ft_reverse_rotate_a(&l);
			ft_swap_a(&l);
		}
		else
		{
			ft_swap_a(&l);
			ft_rotate_a(&l);
			ft_swap_a(&l);
			ft_reverse_rotate_a(&l);
		}
	}
	else if (l->begin->val > l->begin->next->val || l->begin->val > l->begin->next->next->val)
	{
		if (l->begin->next->val > l->begin->next->next->val)
		{
			ft_rotate_a(&l);
			ft_swap_a(&l);
			ft_reverse_rotate_a(&l);
			ft_swap_a(&l);
		}
		else
			ft_swap_a(&l);
	}
	else if (l->begin->val < l->begin->next->val && l->begin->val < l->begin->next->next->val)
	{
		if (l->begin->next->val > l->begin->next->next->val)
		{
			ft_rotate_a(&l);
			ft_swap_a(&l);
			ft_reverse_rotate_a(&l);
		}
	}
}
