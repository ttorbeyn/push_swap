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

int	ft_is_sort_ascendant(t_list **a)
{
	t_list *first;

	first = *a;
	while (first->next)
	{
		if (first->content > first->next->content)
			return (1);
		first = first->next;
	}
	return (0);
}

int	ft_is_sort_descendant(t_list **a)
{
	t_list *first;

	first = *a;
	while (first->next)
	{
		if (first->content < first->next->content)
			return (1);
		first = first->next;
	}
	return (0);
}
