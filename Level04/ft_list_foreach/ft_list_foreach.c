#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

 
void	to_upper(void *c)
{
	char *ca;
	ca = (char *)c;
	if (*ca >= 'a' && *ca <= 'z')
		ca -= 32;
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	while (list_ptr)
	{
		f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

int main ()
{
	t_list *lst;
	
	char c1 = 'a';
	lst = (t_list*)malloc(sizeof(t_list));
	lst->data = (void)c1;
	lst->next = NULL;
	
	char c2 = 'b';
	lst->next = (t_list*)malloc(sizeof(t_list));
	lst->next->data = (void)c2;
	lst->next->next = NULL;

	ft_list_foreach(lst, to_upper);

	while (lst != NULL)
	{
		printf("%c", lst->data);
		lst = lst->next;
	}
}
