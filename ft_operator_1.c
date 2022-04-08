/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_operator.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 01:33:49 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/01/03 01:33:50 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_sa(t_list **a, int write_sa)
{
	t_list	*first;
	t_list	*second;

	if (!a || !*a || !(*a)->next)
		ft_error_free_one(a);
	first = *a;
	second = first->next;
	*a = second;
	first->next = second->next;
	second->next = first;
	if (write_sa)
		write(1, "sa\n", 3);
	return (0);
}

int	ft_sb(t_list **b, int write_sb)
{
	t_list	*first;
	t_list	*second;

	if (!b || !*b || !(*b)->next)
		ft_error_free_one(b);
	first = *b;
	second = first->next;
	*b = second;
	first->next = second->next;
	second->next = first;
	if (write_sb)
		write(1, "sb\n", 3);
	return (0);
}

int	ft_ss(t_list **a, t_list **b, int write_ss)
{
	if (!a || !b)
		ft_error_free_both(a, b);
	ft_sa(a, 0);
	ft_sb(b, 0);
	if (write_ss)
		write(1, "ss\n", 3);
	return (0);
}

int	ft_pa(t_list **a, t_list **b, int write_pa)
{
	t_list	*first_a;
	t_list	*first_b;

	if (!b || !*b || !a)
		ft_error_free_both(a, b);
	first_a = *a;
	first_b = *b;
	*b = first_b->next;
	if (!*a)
	{
		*a = ft_lstnew(first_b->content);
		free(first_b);
	}
	else
	{
		first_b->next = first_a;
		*a = first_b;
	}
	if (write_pa)
		write(1, "pa\n", 3);
	return (0);
}

int	ft_pb(t_list **a, t_list **b, int write_pb)
{
	t_list	*first_a;

	if (!a || !*a || !b)
		ft_error_free_both(a, b);
	first_a = *a;
	*a = first_a->next;
	if (!*b)
	{
		*b = ft_lstnew(first_a->content);
		free(first_a);
	}
	else
	{
		first_a->next = *b;
		*b = first_a;
	}
	if (write_pb)
		write(1, "pb\n", 3);
	return (0);
}
