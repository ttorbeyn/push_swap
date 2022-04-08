/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:34:47 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:34:53 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static int	ft_destroy(t_list **x)
{
	t_list	*tmp;

	if (x)
	{
		while (*x)
		{
			tmp = *x;
			*x = (*x)->next;
			free(tmp);
		}
	}
	return (0);
}

int ft_exit(void)
{
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

int ft_free_data(t_data *data)
{
	if (data->tab)
		free(data->tab);
	if (data->copy)
		free(data->copy);
	return (0);
}

int ft_error_free_one(t_list **x)
{
	if (x)
		ft_destroy(x);
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

int	ft_error_free_both(t_list **a, t_list **b)
{
	if (a)
		ft_destroy(a);
	if (b)
		ft_destroy(b);
	write(2, "Error\n", 6);
	exit (EXIT_FAILURE);
}

int	ft_free_all(t_list **a, t_list **b, t_data *data)
{
	if (a)
		ft_destroy(a);
	if (b)
		ft_destroy(b);
	ft_free_data(data);
	return (0);
}
