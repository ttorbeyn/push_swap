#include "includes/push_swap.h"

int	ft_sort_three(t_list **a, t_list **b)
{
	t_list *first;

	if (!b || !a)
		return (1);
	first = *a;
	//printf("%d | %d\n", first->content, first->next->content);
	if (first->content > first->next->content)
    {
        ft_sa(a, 1);
        //first = *a;
    }
	return (0);
}

