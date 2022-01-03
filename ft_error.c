#include "includes/push_swap.h"



int	ft_destroy(t_list **a)
{
	t_list *tmp;

	if (a)
	{
		while (*a)
		{
			tmp = *a;
			*a = (*a)->next;
			free(tmp);
		}
	}
	return (0);
}

int	ft_exit(t_list **a)
{
	if (a)
		ft_destroy(a);
	write(2, "Error\n", 6);
	exit (0);
}
