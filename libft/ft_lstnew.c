/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 00:18:50 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/13 00:20:22 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*begin;

	begin = malloc(sizeof(t_list));
	if (!begin)
		ft_exit();
	begin->next = NULL;
	begin->content = content;
	return (begin);
}
