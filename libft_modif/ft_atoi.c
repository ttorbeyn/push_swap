/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 17:54:27 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/01/22 14:09:33 by ttorbeyn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static	int	ft_isspace2(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int					i;
	unsigned long long	y;
	int					sign;
	int					c;

	sign = 1;
	i = ft_isspace2(str);
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	y = 0;
	c = 0;
	if (!ft_isdigit(str[i]))
		exit (0);
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		y *= 10;
		y += str[i] - '0';
		i++;
		c++;
	}
	if (str[i] != ' ' && str[i] != '\0')
		exit (0);
	return (y * sign);
}
