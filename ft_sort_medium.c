#include "includes/push_swap.h"

//int	ft_sort_one_hundred(t_list **a, t_list **b, t_data *data)
//{
//    int i;
//
//    i = 0;
//    while (ft_lstsize(a) > 5)
//    {
//        ft_sort_tab(a, data);
//        data->midpoint = data->tab[data->size/2];
//        if (data->size % 2 == 0)
//            data->size--;
//        printf("midpoint : %d\n", data->midpoint);
//        while (i < data->size/2)
//        {
//            if ((*a)->content > data->midpoint)
//            {
//                ft_pb(a, b, 1);
//                i++;
//            }
//            else
//                ft_ra(a, 1);
//        }
//    }
//    ft_sort_five(a, b, data);
//    ft_print_tab(data);
//    ft_print_list(*a, *b);
//    return (0);
//}

int	ft_sort_one_hundred(t_list **a, t_list **b, t_data *data)
{
	int i;
	int j = 0;
	int x = 0;

	data->size = ft_lstsize(a);
	while (data->size > 2)
	{
		i = 0;
		ft_find_midpoint(a, data, data->size);
		if (data->size % 2 == 0)
			data->size--;
		while (i < data->size/2)
		{
			if ((*a)->content < data->midpoint)
			{
				ft_pb(a, b, 1);
				i++;
			}
			else
				ft_ra(a, 1);
		}
		data->chunk[data->chunknb++] = data->size - i;
		data->chunk[data->chunknb++] = i;
		data->chunk[data->chunknb] = -1;
		printf("size before : %d\n", data->size);
		data->size = ft_lstsize(a);
		printf("size after : %d\n", data->size);
		j++;
	}
	if ((*a)->content > (*a)->next->content)
		ft_sa(a, 1);


	ft_print_list(*a, *b);
	while (data->chunk[x] != -1)
	{
		printf("data chunk [%d] : %d\n", x, data->chunk[x]);
		x++;
	}
	return (0);
}

