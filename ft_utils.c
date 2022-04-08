/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:35:52 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:35:53 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_isspace(char str)
{
	if (str == ' ' || str == '\t' || str == '\n' || str == '\v'
		|| str == '\f' || str == '\r' || str == 0)
		return (1);
	return (0);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_lst_is_sort_ascendant(t_list **a)
{
	t_list	*first;

	first = *a;
	while (first->next)
	{
		if (first->content > first->next->content)
			return (1);
		first = first->next;
	}
	return (0);
}

int	ft_lst_is_sort_descendant(t_list **a)
{
	t_list	*first;

	first = *a;
	while (first->next)
	{
		if (first->content < first->next->content)
			return (1);
		first = first->next;
	}
	return (0);
}

int	ft_tab_is_sort_ascendant(int *tab)
{
	int	i;

	i = 1;
	while (tab)
	{
		if (tab[i - 1] > tab[i])
			return (1);
		i++;
	}
	return (0);
}
