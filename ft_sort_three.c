#include "includes/push_swap.h"

int	ft_sort_three(t_list **a)
{
	t_list	*first;
	t_list	*second;

	if (!a)
		return (1);
	while (ft_lst_is_sort_ascendant(a))
	{
		first = *a;
		second = first->next;

		if (second->next && first->content > second->content
			&& first->content > second->next->content)
			ft_ra(a, 1);
		else if (second->next && first->content < second->content
			&& second->content > second->next->content)
			ft_rra(a, 1);
		else if (first->content > second->content)
			ft_sa(a, 1);

	}
	return (0);
}

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


int	ft_sort_five(t_list **a, t_list **b, t_data *data)
{
    int i;

    i = 0;
    ft_sort_tab(a, data);
//    ft_print_tab(data);
//    printf("midpoint : %d\n", data->tab[data->size/2]);
    data->midpoint = data->tab[data->size/2];
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
    ft_sort_three(a);
    ft_sort_three(b);
    while (i > 0)
    {
        ft_pa(a, b, 1);
        ft_ra(a, 1);
        i--;
    }
	return (0);
}