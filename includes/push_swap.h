/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3D.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttorbeyn <ttorbeyn@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:12:36 by ttorbeyn          #+#    #+#             */
/*   Updated: 2022/01/05 00:27:20 by hubert           ###   ########.fr       */
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
# include <limits.h>

typedef struct s_list
{
	int				content;
	int				index;
	int				binary;
	struct s_list	*next;
}					t_list;

typedef struct s_data
{
	int	index_max;
	int	index_min;
	int	lst_size;
	int	*tab;
	int	*copy;
	int	midpoint;
	int	num_max;
	int	bits_max;
	int	num;
}				t_data;

//ft_push_swap

//ft_free
int		ft_exit(void);
int		ft_error_free_one(t_list **x);
int		ft_error_free_both(t_list **a, t_list **b);
int		ft_free_data(t_data *data);
int		ft_free_all(t_list **a, t_list **b, t_data *data);

//ft_operator_1
int		ft_sa(t_list **a, int write_sa);
int		ft_sb(t_list **b, int write_sb);
int		ft_ss(t_list **a, t_list **b, int write_ss);
int		ft_pa(t_list **a, t_list **b, int write_pa);
int		ft_pb(t_list **a, t_list **b, int write_pa);

//ft_operator_2
int		ft_ra(t_list **a, int write_ra);
int		ft_rb(t_list **b, int write_rb);
int		ft_rr(t_list **a, t_list **b, int write_rr);

//ft_operator_3
int		ft_rra(t_list **a, int write_rra);
int		ft_rrb(t_list **b, int write_rrb);
int		ft_rrr(t_list **a, t_list **b, int write_rrr);

//ft_parsing
void	ft_lstadd_front2(t_list **lst, t_list *new);
int		ft_parsing(char *str, t_list **a);
int		ft_check_duplicate(t_list **a);

//ft_sort_small
int		ft_sort_three(t_list **a);
int		ft_sort_five(t_list **a, t_list **b, t_data *data);

//ft_sort_medium
int		ft_sort_hundred(t_list **a, t_list **b, t_data *data);

//ft_tab
int		ft_list_to_tab(t_list **a, t_data *data);
int		ft_tab_to_list(t_list **a, t_data *data, int *tab);
int		ft_sort_tab(int *tab, int size);
int		ft_decimal_to_binary(int *tab, t_data *data);
int		ft_index(t_list **a, t_data *data);

//ft_utils
int		ft_isdigit(char c);
int		ft_isspace(char str);
int		ft_lst_is_sort_ascendant(t_list **a);
int		ft_tab_is_sort_ascendant(int *tab);

//libft_modif
long	ft_atoi(char *str);
char	**ft_split(char const *s, char c);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstnew(int content);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list **lst);
void	ft_lstclear(t_list **lst, void (*del)(int));
t_list	*ft_lstbeforelast(t_list *lst);

//ft_utils_print
void	ft_print_tab(t_data *data, int *tab);
int		ft_print_list_adress(t_list *a, t_list *b);
int		ft_print_list(t_list *a, t_list *b);

#endif
