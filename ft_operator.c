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
	t_list	*first_a;
	t_list	*first_b;

	if (!b || !*b)
		return (0);
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
	t_list	*first_a;
	t_list	*first_b;

	if (!a || !*a)
		return (0);
	first_a = *a;
	first_b = *b;
	*a = first_a->next;
	first_a->next = first_b;
	*b = first_a;
	if (write_pb)
		write(1, "pb\n", 3);
	return (0);
}

int	ft_ra(t_list **a, int write_ra)
{
	t_list	*first_a;
	t_list	*i;

	first_a = *a;
	*a = first_a->next;
	i = ft_lstlast(*a);
	i->next = first_a;
	first_a->next = NULL;
	if (write_ra)
		write(1, "ra\n", 3);
	return (0);
}

int	ft_rb(t_list **b, int write_rb)
{
	t_list	*first_b;
	t_list	*i;

	first_b = *b;
	*b = first_b->next;
	i = ft_lstlast(*b);
	i->next = first_b;
	first_b->next = NULL;
	if (write_rb)
		write(1, "rb\n", 3);
	return (0);
}

int	ft_rr(t_list **a, t_list **b, int write_rr)
{
	ft_ra(a, 0);
	ft_rb(b, 0);
	if (write_rr)
		write(1, "rr\n", 3);
	return (0);
}

int ft_rra(t_list **a, int write_rra)
{
	t_list	*i;
	t_list	*tmp;
	t_list	*first_a;

	first_a = *a;
	i = ft_lstlast(*a);
	i->previous->next = NULL;
	tmp = i;
	*a = tmp;
	tmp->next = first_a;
	if (write_rra)
		write(1, "rra\n", 4);
	return (0);
}

int ft_rrb(t_list **b, int write_rrb)
{
	t_list	*i;
	t_list	*tmp;
	t_list	*first_b;

	first_b = *b;
	i = ft_lstlast(*b);
	i->previous->next = NULL;
	tmp = i;
	*b = tmp;
	tmp->next = first_b;
	if (write_rrb)
		write(1, "rrb\n", 4);
	return (0);
}

int	ft_rrr(t_list **a, t_list **b, int write_rrr)
{
	ft_rra(a, 0);
	ft_rrb(b, 0);
	if (write_rrr)
		write(1, "rrr\n", 4);
	return (0);
}