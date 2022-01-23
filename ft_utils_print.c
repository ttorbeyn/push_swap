#include "includes/push_swap.h"

void    ft_print_tab(t_data *data)
{
    int i;

    i = 0;
    printf("tabsize : %d\n", data->size);
    while (i < data->size)
    {
        printf("%d\n", data->tab[i]);
        i++;
    }
}