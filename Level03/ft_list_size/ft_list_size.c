#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}

#include <stdlib.h>
int main ()
{
	t_list	*lst;
	int n1 = 1;
	int n2 = 2;
	int n3 = 3;
	int n4 = 4;

	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = &n1;

	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = &n2;

	lst->next->next = (t_list*)malloc(sizeof(t_list));
    lst->next->next->data = &n3;

	lst->next->next->next = (t_list*)malloc(sizeof(t_list));
	lst->next->next->next->data = &n4;
	lst->next->next->next->next = NULL;
	
	int a = ft_list_size(lst);
	printf ("%d\n", a);

	int res;
	while (lst != NULL)
	{
		res = (int)lst->data;
		printf ("%d\n", res);
		lst = lst->next;
	}
}
