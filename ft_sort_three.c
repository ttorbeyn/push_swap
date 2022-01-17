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

int	ft_find_minimum(t_list **a)
{
	int x;
	int y;
	int	z;
	t_list *tmp;

	tmp = *a;
	y = 0;
	z = y;
	x = INT_MAX;
	while (tmp->next)
	{
		if (tmp->content < x)
		{
			x = tmp->content;
			z = y;
		}
		y++;
		tmp = tmp->next;
	}
	printf("y:%d\n", y);
	return (z);
}

int	ft_sort_five(t_list **a, t_list **b, int size)
{
	printf("%d\n", ft_find_minimum(a));

	ft_pb(a, b, 1);;
	if (size == 5)
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