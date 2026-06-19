#include <stdlib.h>
#include <stdio.h>

typedef struct	s_list
{
	int			data;
	struct s_list	*next;
}	t_list;

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*start;

	if (lst == NULL || lst->next == NULL)
		return (lst);
	start = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *start;
	int tmp;

	if(!lst || lst->next == NULL)
		return (lst);
	start = lst;
	while(lst->next != NULL)
	{
		if((cmp)(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}


int	cmp(int a, int b)
{
	return (a < b);
}

int	main(void)
{
	t_list	n1;
	t_list	n2;
	t_list	n3;
	t_list	*lst;

	n1.data = 3;
	n2.data = 1;
	n3.data = 2;
	n1.next = &n2;
	n2.next = &n3;
	n3.next = NULL;
	lst = sort_list(&n1, cmp);
	while (lst)
	{
		printf("%d\n", lst->data);
		lst = lst->next;
	}
	return (0);
}


/*
A rendre a l'examen:

#include "ft_list.h"
#include <stdlib.h>

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		tmp;
	t_list	*start;

	if (lst == NULL || lst->next == NULL)
		return (lst);
	start = lst;
	while (lst->next != NULL)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			tmp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp;
			lst = start;
		}
		else
			lst = lst->next;
	}
	return (start);
}

*/