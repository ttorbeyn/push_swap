#include "includes/push_swap.h"

int	equal_chained(t_list *a, t_list *b)
{
	a->content = b->content;
	a->next = b->next;
	return (0);
}

t_list	*ft_swap_a(t_list **a)
{
	t_list	*first;
	t_list	*tmp;

	first = *a;
	if (*a && *a->next)
	{
		tmp = *a;

		*a->next = *a;
	}
	return (first);
}

int	ft_print_lst(t_list *a)
{
	while (a->next)
	{
		printf("%d\n", a->content);
		a = a->next;
	}
	return (0);
}

int main()
{
	t_list *a;
	t_list *b;

	a->content = 21;
	a->next = b;
	b->content = 42;
	b->next = NULL;
	ft_print_lst(a);
	printf("coucou2\n");
	return (0);
}
