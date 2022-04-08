
int	ft_sa(t_list **a, int write_sa)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!a || !*a || !(*a)->next)
		return (1);
	first = *a;
	second = first->next;
	third = second->next;
	*a = second;
	second->previous = NULL;
	second->next = first;
	first->previous = second;
	/
	if (third)
		third->previous = first;
	if (write_sa)
		write(1, "sa\n", 3);
	return (0);
}

int	ft_sb(t_list **b, int write_sb)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (!b || !*b || !(*b)->next)
		return (1);
	first = *b;
	second = first->next;
	third = second->next;
	*b = second;
	second->previous = NULL;
	second->next = first;
	first->previous = second;
	first->next = third;
	if (third)
		third->previous = first;
	if (write_sb)
		write(1, "sb\n", 3);
	return (0);
}

int	ft_ss(t_list **a, t_list **b, int write_ss)
{
	if (!a || !b)
		return (1);
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
		return (1);
	first_a = *a;
	first_b = *b;
	*b = first_b->next;
	if (first_b->next)
		first_b->next->previous = NULL;
	if (!*a)
		*a = ft_lstnew(first_b->content);
	else
	{
		first_b->next = first_a;
		*a = first_b;
		first_b->next->previous = first_b;
	}
	if (write_pa)
		write(1, "pa\n", 3);
	return (0);
}

int	ft_pb(t_list **a, t_list **b, int write_pb)
{
	t_list	*first_a;
	t_list	*first_b;

	if (!a || !*a)
		return (1);
	first_a = *a;
	first_b = *b;
	*a = first_a->next;
	if (first_a->next)
		first_a->next->previous = NULL;
	if (!*b)
		*b = ft_lstnew(first_a->content);
	else
	{
		first_a->next = first_b;
		*b = first_a;
		first_a->next->previous = first_a;
	}
	if (write_pb)
		write(1, "pb\n", 3);
	return (0);
}