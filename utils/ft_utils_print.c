/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:35:57 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:35:58 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_print_tab(t_data *data, int *tab)
{
	int	i;

	i = 0;
	printf("tabsize : %d\n", data->lst_size);
	while (i < data->lst_size)
	{
		printf("value[%d] :%d\n", i, tab[i]);
		i++;
	}
}

int	ft_print_list_adress(t_list *a, t_list *b)
{
	printf("A\t\t|\tB\n");
	printf("----------------------------------\n");
	while (a && b)
	{
		printf("%d\t\t|\t%d\n", a->content, b->content);
		printf("%p\t|\t%p\n", a, b);
		printf("----------------------------------\n");
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		printf("%d\t\t|\t\n", a->content);
		printf("%p\t|\t\n", a);
		printf("----------------------------------\n");
		a = a->next;
	}
	while (b)
	{
		printf(" \t\t|\t%d\n", b->content);
		printf("\t|\t%p\n", b);
		printf("----------------------------------\n");
		b = b->next;
	}
	printf("\n");
	return (0);
}

int	ft_print_list(t_list *a, t_list *b)
{
	printf("A\t\t|\tB\n");
	printf("----------------------------------\n");
	while (a && b)
	{
		printf("%d\t\t|\t%d\n", a->content, b->content);
		printf("----------------------------------\n");
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		printf("%d\t\t|\t\n", a->content);
		printf("----------------------------------\n");
		a = a->next;
	}
	while (b)
	{
		printf(" \t\t|\t%d\n", b->content);
		printf("----------------------------------\n");
		b = b->next;
	}
	printf("\n");
	return (0);
}

int	ft_decimal_to_binary(int *tab, t_data *data)
{
	int	i;
	int	x;
	int	nb;
	int	ret;

	i = 0;
	while (i < data->lst_size)
	{
		nb = 0;
		x = 1;
		while (tab[i])
		{
			ret = tab[i] % 2;
			nb += ret * x;
			tab[i] = tab[i] / 2;
			x *= 10;
		}
		tab[i] = nb;
		i++;
	}
	return (0);
}
