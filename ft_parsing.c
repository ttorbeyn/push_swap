/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:35:01 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/07 17:35:02 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	ft_check_duplicate(t_list **a)
{
	t_list	*first;
	t_list	*tmp;

	tmp = *a;
	while (tmp)
	{
		first = tmp->next;
		while (first)
		{
			if (first->content == tmp->content)
				ft_exit(a);
			first = first->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

void	ft_lstadd_front2(t_list **lst, t_list *new)
{
	(*lst)->previous = new;
	new->next = *lst;
	*lst = new;
	new->previous = NULL;
}

void	ft_lstadd_back2(t_list **lst, t_list *new)
{
	t_list	*first;

	first = *lst;
	first = ft_lstlast(first);
	first->next = new;
	new->previous = first;
	new->next = NULL;
}

int	ft_parsing(char *str, t_list **a)
{
	t_list	*b;
	char	**new;
	int		i;

	i = 0;
	b = NULL;
	new = ft_split(str, ' ');
	while (new[i])
	{
		b = ft_lstnew(ft_atoi(new[i], a));
		i++;
		if (a && *a)
			ft_lstadd_back2(a, b);
		else
			*a = b;
	}
	return (0);
}
