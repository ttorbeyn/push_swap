#include "includes/push_swap.h"

int	equal_chained(t_lst *a, t_lst *b)
{
	a->content = b->content;
	a->next = b->next;
	return (0);
}

//t_lst	*ft_swap_a(t_lst *a)
//{
//	t_lst	*first;
//	t_lst	*tmp;
//
//	first = a;
//	if (a && a->next)
//	{
//		tmp = a;
//
//		a->next = a;
//	}
//	return (first);
//}first


int	ft_print_lst(t_lst *a)
{

	while (a)
	{
		printf("%d\n", a->content);
		a = a->next;
	}
	return (0);
}

int main()
{
	t_lst *a;
	t_lst *b;
	t_lst *c;

	a = malloc(sizeof(t_lst));
	b = malloc(sizeof(t_lst));
	c = malloc(sizeof(t_lst));
	if (a)
	{
		a->content = 21;
		a->next = b;
	}
	if (b)
	{
		b->content = 42;
		b->next = c;
	}
	if (c)
	{
		c->content = 7;
		c->next = NULL;
	}
	ft_print_lst(a);
	return (0);
}
