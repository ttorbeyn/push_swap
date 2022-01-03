#include "includes/push_swap.h"

void	ft_lstadd_front2(t_list **lst, t_list *new)
{
	(*lst)->previous = new;
	new->next = *lst;
	*lst = new;
	new->previous = NULL;
}

int ft_parsing(char *str, t_list **a)
{
	t_list *b;
	int	i;

	i = 0;
	b = ft_lstnew(ft_atoi(&str[i]));
//	printf("%d\n", atoi(&str[i]));
	if (a && *a)
		ft_lstadd_front2(a, b);
	else
		*a = b;
	return (0);
}