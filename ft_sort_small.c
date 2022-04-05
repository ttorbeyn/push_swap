#include "includes/push_swap.h"

int	ft_sort_three(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (!a)
		return (1);
	while (ft_lst_is_sort_ascendant(a))
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

int	ft_sort_three_b(t_list **b)
{
    t_list	*first;
    t_list	*second;

    if (!b)
        return (1);
    while (ft_lst_is_sort_ascendant(b))
    {
        first = *b;
        second = first->next;

        if (second->next && first->content > second->content
            && first->content > second->next->content)
            ft_rb(b, 1);
        else if (second->next && first->content < second->content
                 && second->content > second->next->content)
            ft_rrb(b, 1);
        else if (first->content > second->content)
            ft_sb(b, 1);

    }
    return (0);
}

int	ft_sort_five(t_list **a, t_list **b, t_data *data)
{
    int i;

    i = 0;
    ft_index(a, data);
	ft_print_list(*a, *b);
    if (data->size % 2 == 0)
        data->size--;
    while (i < data->size/2)
    {
        if ((*a)->content > data->midpoint)
        {
            ft_pb(a, b, 1);
            i++;
        }
        else
            ft_ra(a, 1);
    }
    ft_sort_three(a);
    ft_sort_three_b(b);
    while (i > 0)
    {
        ft_pa(a, b, 1);
        ft_ra(a, 1);
        i--;
    }

	return (0);
}
