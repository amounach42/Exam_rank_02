#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int		cmp(int a, int b)
{
	return (a <= b);
}

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int	swap;

	tmp = lst;
	while (lst->next != 0)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
		   lst = tmp;	
		}
		else 
			lst = lst->next;
	}
	return (tmp);
}

int main ()
{
	t_list *lst;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = -15;

	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = -20;

	lst->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->data = 15;
	lst->next->next->next = NULL;

	lst = sort_list(lst, cmp);

	while (lst != NULL)
	{
		printf ("%d\n", lst->data);
		lst = lst->next;
	}

}

