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

#include "../includes/push_swap.h"

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
				ft_error_free_one(a);
			first = first->next;
		}
		tmp = tmp->next;
	}
	return (0);
}

int	ft_parsing(char *str, t_list **a)
{
	t_list	*token;
	char	**new;
	int		i;

	i = 0;
	token = NULL;
	new = NULL;
	new = ft_split(str, ' ');
	if (!new)
		ft_error_free_one(a);
	while (new[i])
	{
		token = ft_lstnew(ft_atoi(new[i]));
		i++;
		if (a && *a)
			ft_lstadd_back(a, token);
		else
			*a = token;
	}
	i = 0;
	while (new[i])
		free(new[i++]);
	free(new);
	return (0);
}
