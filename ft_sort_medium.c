#include "includes/push_swap.h"

int	ft_sort_one_hundred(t_list **a, t_list **b, t_data *data)
{
    int i;

    i = 0;
    while (ft_lstsize(a) > 5)
    {
        ft_sort_tab(a, data);
        data->midpoint = data->tab[data->size/2];
        if (data->size % 2 == 0)
            data->size--;
        while (i < data->size/2)
        {
            if ((*a)->content > data->midpoint)
            {
                ft_pb(a, b, 1);
                i++;
            }
            else
                ft_ra(a, 1);
        }
    }
    ft_print_tab(data);
    ft_print_list(*a, *b);
    return (0);
}
