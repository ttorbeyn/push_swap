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

int ft_tab_to_list(t_list **a, t_data *data, int *tab)
{
	t_list *tmp;
	int i;

	i = 0;
	tmp = *a;
	while (i < data->size)
	{
		tmp->content = tab[i];
		i++;
		tmp = tmp->next;
	}
	return (0);
}

int ft_sort_tab(int *tab, int size)
{
    int i;
    int j;
    int tmp;

    i = 1;
    while (i < size)
    {
        tmp =  tab[i];
        j = i - 1;
        while (j >= 0 && tab[j] > tmp)
        {
            tab[j + 1] = tab[j];
            j = j - 1;
        }
        tab[j + 1] = tmp;
        i++;
    }
    return (0);
}

int	ft_decimal_to_binary(int *tab, t_data *data)
{
	int i;
	int x;
	int nb;
	int ret;

	i = 0;
	while (i < data->size)
	{
		nb = 0;
		x = 1;
		while (tab[i])
		{
			ret = tab[i] % 2;
			nb += ret * x;
			tab[i] = tab[i]/2;
			x *= 10;
		}
		tab[i] = nb;
		i++;
	}
	return (0);
}

int ft_index(t_list **a, t_data *data)
{
	int	*copy;
	int i;
	int j;

	ft_list_to_tab(a, data);
	i = 0;
	copy = malloc(sizeof(int) * data->size);
	while (i < data->size)
	{
		copy[i] = data->tab[i];
		i++;
	}
	ft_sort_tab(copy, data->size);
	i = 0;
	while (i < data->size)
	{
		j = 0;
		while (j < data->size)
		{
			if (data->tab[i] == copy[j])
			{
				data->tab[i] = j;
				break;
			}
			j++;
		}
		i++;
	}
	ft_decimal_to_binary(data->tab, data);
	ft_print_tab(data, data->tab);
	ft_tab_to_list(a, data, data->tab);
	return (0);
}