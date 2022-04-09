/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstbeforelast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 22:55:01 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/04/08 22:55:05 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstbeforelast(t_list *lst)
{
	if (!lst)
		ft_exit();
	while (lst->next->next != 0)
		lst = lst->next;
	return (lst);
}
