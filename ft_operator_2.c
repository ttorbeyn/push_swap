/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 01:37:57 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/01/03 01:37:58 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_ra(t_list **a, int write_ra)
{
	t_list	*first;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		ft_error_free_one(a);
	first = *a;
	*a = first->next;
	last = ft_lstlast(*a);
	last->next = first;
	first->next = NULL;
	if (write_ra)
		write(1, "ra\n", 3);
	return (0);
}

int	ft_rb(t_list **b, int write_rb)
{
	t_list	*first;
	t_list	*last;

	if (!b || !*b || !(*b)->next)
		ft_error_free_one(b);
	first = *b;
	*b = first->next;
	last = ft_lstlast(*b);
	last->next = first;
	first->next = NULL;
	if (write_rb)
		write(1, "rb\n", 3);
	return (0);
}

int	ft_rr(t_list **a, t_list **b, int write_rr)
{
	if (!a || !b)
		ft_error_free_both(a, b);
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (write_rr)
		write(1, "rr\n", 3);
	return (0);
}
