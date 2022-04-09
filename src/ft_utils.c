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

#include "../includes/push_swap.h"

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
