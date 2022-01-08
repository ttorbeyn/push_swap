#include "includes/push_swap.h"

int	ft_print_list_adress(t_list *a, t_list *b)
{
	printf("A\t\t|\tB\n");
	printf("----------------------------------\n");
	while (a && b)
	{
		if (a->previous && b->previous)
			printf("%p\t|\t%p\n", a->previous, b->previous);
		printf("%d\t\t|\t%d\n", a->content, b->content);
		printf("%p\t|\t%p\n", a, b);
		//printf("%p\t|\t%p\n", a->next, b->next);
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

int	ft_print_list(t_list *a, t_list *b)
{
	printf("A\t\t|\tB\n");
	printf("----------------------------------\n");
	while (a && b)
	{
		printf("%d\t\t|\t%d\n", a->content, b->content);
		printf("----------------------------------\n");
		a = a->next;
		b = b->next;
	}
	while (a)
	{
		printf("%d\t\t|\t\n", a->content);
		printf("----------------------------------\n");
		a = a->next;
	}
	while (b)
	{
		printf(" \t\t|\t%d\n", b->content);
		printf("----------------------------------\n");
		b = b->next;
	}
	printf("\n");
	return (0);
}


int main(int ac, char **av)
{
	int x;
	x = 1;
    t_list *a = NULL;
    t_list *d = NULL;

    while (x < ac)
	{
		ft_parsing(av[x], &a);
        x++;
	}
    ft_check_duplicate(&a);
	x = ft_lstsize(&a);
	if (x <= 3)
		ft_sort_three(&a, &d);
	ft_print_list(a, d);
	return (0);
}
