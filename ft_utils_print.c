#include "includes/push_swap.h"

void    ft_print_tab(t_data *data, int *tab)
{
    int i;

    i = 0;
    printf("tabsize : %d\n", data->size);
    while (i < data->size)
    {
        printf("value[%d] :%d\n", i, tab[i]);
        i++;
    }
}

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