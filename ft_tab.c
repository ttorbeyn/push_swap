#include "includes/push_swap.h"

int ft_list_to_tab(t_list **a, t_data *data)
{
    t_list *tmp;
    int i;

    data->tab = malloc(sizeof(int) * data->size);
    i = 0;
    tmp = *a;
    while (tmp)
    {
        data->tab[i] = tmp->content;
        i++;
        tmp = tmp->next;
    }
    return (0);
}

int ft_sort_tab(t_list **a, t_data *data)
{
    int i;
    int j;
    int tmp;

    ft_list_to_tab(a, data);
    i = 1;
    while (i < data->size)
    {
        tmp =  data->tab[i];
        j = i - 1;
        while (j >= 0 && data->tab[j] > tmp)
        {
            data->tab[j + 1] = data->tab[j];
            j = j - 1;
        }
        data->tab[j + 1] = tmp;
        i++;
    }
    return (0);
}
