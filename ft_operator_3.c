/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator_3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 01:38:03 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/01/03 01:38:05 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_rra(t_list **a, int write_rra)
{
	t_list	*first;

	if (!a || !*a || !(*a)->next)
		ft_error_free_one(a);
	first = *a;
	first = ft_lstbeforelast(first);
	first->next->next = (*a);
	*a = first->next;
	first->next = NULL;
	if (write_rra)
		write(1, "rra\n", 4);
	return (0);
}

int	ft_rrb(t_list **b, int write_rrb)
{
	t_list	*last;
	t_list	*first;

	if (!b || !*b || !(*b)->next)
		ft_error_free_one(b);
	first = *b;
	last = ft_lstlast(*b);
	*b = last;
	last->next = first;
	if (write_rrb)
		write(1, "rrb\n", 4);
	return (0);
}

int	ft_rrr(t_list **a, t_list **b, int write_rrr)
{
	if (!a || !b)
		ft_error_free_both(a, b);
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (write_rrr)
		write(1, "rrr\n", 4);
	return (0);
}
