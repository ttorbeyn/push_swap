/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 23:47:16 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/12/30 21:23:26 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*current;

	if (!alst || !new)
		return ;
	current = *alst;
	if (current == 0)
		*alst = new;
	else
	{
		while (current->next != 0)
			current = current->next;
		current->next = new;
		new->next = 0;
	}
}
