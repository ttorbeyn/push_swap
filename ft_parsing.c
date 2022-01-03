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
	char **new;
	int	i;

	i = 0;
	new = ft_split(str, ' ');
	while (new[i])
	{
		b = ft_lstnew(ft_atoi(new[i]));
		if (a && *a)
			ft_lstadd_front2(a, b);
		else
			*a = b;
		i++;
	}
	return (0);
}