/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 01:37:57 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/01/03 01:37:58 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
}
