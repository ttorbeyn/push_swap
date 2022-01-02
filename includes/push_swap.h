/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:12:36 by ttorbeyn          #+#    #+#             */
/*   Updated: 2021/12/30 20:26:01 by hubert           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>
# include <mlx.h>
# include <limits.h>
# include "libft.h"


//operators
int ft_sa(t_list **a, int write_sa);
int ft_sb(t_list **b, int write_sb);
int ft_ss(t_list **a, t_list **b, int write_ss);
int	ft_pa(t_list **a, t_list **b, int write_pa);
int	ft_pb(t_list **a, t_list **b, int write_pa);
int	ft_ra(t_list **a, int write_ra);
int	ft_rb(t_list **b, int write_rb);
int	ft_rr(t_list **a, t_list **b, int write_rr);
int ft_rra(t_list **a, int write_rra);
int ft_rrb(t_list **b, int write_rrb);
int	ft_rrr(t_list **a, t_list **b, int write_rrr);

void				ft_lstadd_back(t_list **alst, t_list *new);
//void				ft_lstadd_front(t_list **alst, t_list *new);
//void				ft_lstclear(t_list **lst, void (*del)(int));
//void				ft_lstdelone(t_list *lst, void (*del)(int));
//void				ft_lstiter(t_list *lst, void (*f)(int));
//t_list				*ft_lstlast(t_list *lst);
//t_list				*ft_lstmap(t_list *lst, int (*f)(int),
//								 void (*del)(int));
t_list				*ft_lstnew(int content);
//int					ft_lstsize(t_list *lst);

#endif
