/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_small.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:36:07 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:36:08 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sort_three(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (!a)
		ft_error_free_one(a);
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
		ft_error_free_one(b);
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

static int	data_set(t_list **a, t_data *data)
{
	ft_list_to_tab(a, data);
	ft_sort_tab(data->tab, data->lst_size);
	data->midpoint = data->tab[data->lst_size / 2];
	if (data->lst_size % 2 == 0)
		data->lst_size--;
	return (0);
}

int	ft_sort_five(t_list **a, t_list **b, t_data *data)
{
	int	i;

	i = 0;
	if (!ft_lst_is_sort_ascendant(a))
		exit (0);
	data_set(a, data);
	while (i < data->lst_size / 2)
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
