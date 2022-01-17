#include "includes/push_swap.h"

int	ft_sort_three(t_list **a, t_list **b)
{
	t_list	*first;
	t_list	*second;

	if (!a || !b)
		return (1);
	while (ft_is_sort(a))
	{
		first = *a;
		second = first->next;
		if (second->next && first->content > second->content
			&& first->content > second->next->content)
			ft_ra(a, 1);
		else if (second->next && first->content < second->content
			&& second->content > second->next->content)
			ft_rra(a, 1);
		else if (first->content > second->content)
			ft_sa(a, 1);
	}
	return (0);
}
