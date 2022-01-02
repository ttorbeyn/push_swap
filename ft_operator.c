#include "includes/push_swap.h"

int ft_sa(t_list **a, int write_sa)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!a || !*a || !(*a)->next)
		return (0);
	first = *a;
	second = first->next;
	third = second->next;
	*a = second;
	second->next = first;
	first->next = third;
	if (write_sa)
		write(1, "sb\n", 3);
	return (0);
}

int ft_sb(t_list **b, int write_sb)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!b || !*b || !(*b)->next)
		return (0);
	first = *b;
	second = first->next;
	third = second->next;
	*b = second;
	second->next = first;
	first->next = third;
	if (write_sb)
		write(1, "sb\n", 3);
	return (0);
}

int ft_ss(t_list **a, t_list **b, int write_ss)
{
	ft_sa(a, 0);
	ft_sb(b, 0);
	if (write_ss)
		write(1, "ss\n", 3);
	return (0);
}

int	ft_pa(t_list **a, t_list **b, int write_pa)
{
	if (!b || !*b)
		return (0);
	t_list	*first_a;
	t_list	*first_b;
	first_a = *a;
	first_b = *b;
	*b = first_b->next;
	first_b->next = first_a;
	*a = first_b;
	if (write_pa)
		write(1, "pa\n", 3);
	return (0);
}

int	ft_pb(t_list **a, t_list **b, int write_pb)
{
	if (!a || !*a)
		return (0);
	t_list	*first_a;
	t_list	*first_b;
	first_a = *a;
	first_b = *b;
	*a = first_a->next;
	first_a->next = first_b;
	*b = first_a;
	if (write_pb)
		write(1, "pb\n", 3);
	return (0);
}