#include "includes/push_swap.h"

int	main(int ac, char **av)
{
	int		x;
	t_list	*a;
	t_list	*b;
	t_data	data;

	a = NULL;
	b = NULL;
	x = 1;
	while (x < ac)
	{
		ft_parsing(av[x], &a);
		x++;
	}
	ft_check_duplicate(&a);
	data.lst_size = ft_lstsize(&a);
	if (data.lst_size <= 3)
		ft_sort_three(&a);
	else if (data.lst_size <= 5)
		ft_sort_five(&a, &b, &data);
	else if (data.lst_size <= 500)
		ft_sort_one_hundred(&a, &b, &data);
//	ft_print_list(a, b);
	return (0);
}
