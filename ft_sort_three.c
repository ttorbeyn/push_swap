#include "includes/push_swap.h"

int	ft_sort_three(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (!a)
		return (1);
	while (ft_is_sort_ascendant(a))
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

int	ft_find_minimum(t_list **a, t_data *data)
{
	int x;
	int y;
	t_list *tmp;

	tmp = *a;
	y = 0;
    data->index_min = y;
	x = tmp->content;
	while (tmp)
	{
		if (tmp->content < x)
		{
			x = tmp->content;
			data->index_min = y;
		}
		y++;
		tmp = tmp->next;
	}
	return (x);
}

int	ft_find_maximum(t_list **a, t_data *data)
{
    int x;
    int y;
    t_list *tmp;

    tmp = *a;
    y = 0;
    data->index_max = y;
    x = tmp->content;
    while (tmp)
    {
        if (tmp->content > x)
        {
            x = tmp->content;
            data->index_max = y;
        }
        y++;
        tmp = tmp->next;
    }
    return (x);
}

int	ft_sort_five(t_list **a, t_list **b, t_data *data)
{
    printf("%d\n", ft_find_minimum(a, data));
    printf("%d\n", ft_find_maximum(a, data));
    printf("%d\n", data->index_max);
    printf("%d\n", data->index_min);

	ft_pb(a, b, 1);;
	if (data->size == 5)
		ft_pb(a, b, 1);
	ft_sort_three(a);
	ft_pa(a, b, 1);
	if ((*a)->content > (*a)->next->content)
		ft_sa(a, 1);
	ft_pa(a, b, 1);
	//ft_sort_three(a);

//	while (ft_is_sort_ascendant(a))
//	{
//
//
//		size++;
//
//
//
//		while (size < 5)
//		{
//			ft_pa(a, b, 1);
//			size++;
//		}
//	}
	return (0);
}