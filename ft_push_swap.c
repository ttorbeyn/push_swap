#include "includes/push_swap.h"



int main(int ac, char **av)
{
	int x;
    t_list *a = NULL;
    t_list *b = NULL;
    t_data data;

    data.chunknb = 0;
	x = 1;
    while (x < ac)
	{
		ft_parsing(av[x], &a);
        x++;
	}
    ft_check_duplicate(&a);
//	ft_print_list(a, d);
    data.size = ft_lstsize(&a);
    printf("size : %d\n", data.size);
    //ft_print_list(a, d);
	if (data.size <= 3)
		ft_sort_three(&a);
	else if (data.size <= 5)
		ft_sort_five(&a, &b, &data);
//    else if (data.size <= 100)
//        ft_sort_one_hundred(&a, &b, &data);
//	ft_print_list(a, d);
	return (0);
}
