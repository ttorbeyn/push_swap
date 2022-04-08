/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_medium.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:33:18 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:33:33 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	define_max(t_list **a, t_data *data)
{
	data->num_max = data->lst_size - 1;
	data->bits_max = 0;
	ft_index(a, data);
	while ((data->num_max >> data->bits_max) != 0)
		data->bits_max++;
	return (0);
}

int	ft_sort_hundred(t_list **a, t_list **b, t_data *data)
{
	int	i;
	int	j;

	define_max(a, data);
	i = 0;
	while (i < data->bits_max)
	{
		j = 0;
		while (j < data->lst_size)
		{
			data->num = (*a)->content;
			if (((data->num >> i) & 1) == 1)
				ft_ra(a, 1);
			else
				ft_pb(a, b, 1);
			j++;
		}
		while (*b)
			ft_pa(a, b, 1);
		i++;
	}
	return (0);
}
