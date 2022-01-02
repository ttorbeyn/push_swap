#include "includes/push_swap.h"

int	ft_print_list(t_list *a, t_list *b)
{
	printf("A\t\t|\tB\n");
	printf("----------------------------------\n");
	while (a && b)
	{
		//if (a->previous && b->previous)
			printf("%p\t|\t%p\n", a->previous, b->previous);
		printf("%d\t\t|\t%d\n", a->content, b->content);
		printf("%p\t|\t%p\n", a, b);
		printf("----------------------------------\n");
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		if (a->previous)
			printf("%p\t|\t\n", a->previous);
		printf("%d\t\t|\t\n", a->content);
		printf("%p\t|\t\n", a);
		printf("----------------------------------\n");
		a = a->next;
	}
	while (b)
	{
		if (b->previous)
			printf("\t|\t%p\n", b->previous);
		printf(" \t\t|\t%d\n", b->content);
		printf("\t|\t%p\n", b);
		printf("----------------------------------\n");
		b = b->next;
	}
	printf("\n");
	return (0);
}

void	ft_lstadd_front2(t_list **lst, t_list *new)
{
	(*lst)->previous = new;
	new->next = *lst;
	*lst = new;
	new->previous = NULL;
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	t_list *d;
	t_list *e;
	t_list *f;

	a = ft_lstnew(21);
	b = ft_lstnew(42);
	ft_lstadd_front2(&a, b);
	c = ft_lstnew(7);
	ft_lstadd_front2(&a, c);
	d = ft_lstnew(3);
	e = ft_lstnew(0);
	ft_lstadd_front2(&d, e);
	f = ft_lstnew(11);
	ft_lstadd_front2(&d, f);
	ft_print_list(a, d);
//	ft_sa(&a, 1);
//	ft_sb(&d, 1);
	ft_ss(&a, &d, 1);
//	ft_pb(&a, &d, 1);
//	ft_pb(&a, &d, 1);
//	ft_rr(&a, &d, 1);
	ft_print_list(a, d);
	return (0);
}
