/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:35:16 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:35:18 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_list_to_tab(t_list **a, t_data *data)
{
	t_list	*tmp;
	int		i;

	data->tab = malloc(sizeof(int) * data->lst_size);
	i = 0;
	tmp = *a;
	while (tmp)
	{
		data->tab[i] = tmp->content;
		i++;
		tmp = tmp->next;
	}
	return (0);
}

int	ft_tab_to_list(t_list **a, t_data *data, int *tab)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	while (i < data->lst_size)
	{
		tmp->content = tab[i];
		i++;
		tmp = tmp->next;
	}
	return (0);
}

int	ft_sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		tmp = tab[i];
		j = i - 1;
		while (j >= 0 && tab[j] > tmp)
		{
			tab[j + 1] = tab[j];
			j = j - 1;
		}
		tab[j + 1] = tmp;
		i++;
	}
	return (0);
}

int	ft_copy_tab(t_list **a, t_data *data)
{
	int	i;

	i = 0;
	ft_list_to_tab(a, data);
	data->copy = malloc(sizeof(int) * data->lst_size);
	while (i < data->lst_size)
	{
		data->copy[i] = data->tab[i];
		i++;
	}
	ft_sort_tab(data->copy, data->lst_size);
	return (0);
}

int	ft_index(t_list **a, t_data *data)
{
	int	i;
	int	j;

	i = 0;
	ft_copy_tab(a, data);
	while (i < data->lst_size)
	{
		j = 0;
		while (j < data->lst_size)
		{
			if (data->tab[i] == data->copy[j])
			{
				data->tab[i] = j;
				break ;
			}
			j++;
		}
		i++;
	}
	ft_tab_to_list(a, data, data->tab);
	return (0);
}
