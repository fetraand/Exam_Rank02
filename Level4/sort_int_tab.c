void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int	i;
	int				tmp;
	int				swapped;

	if (size <= 1 || !tab)
		return ;
	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}
}

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int tmp;
	int swapped;

	if(!tab || size <= 1)
		return;
	swapped = 1;
	while(swapped)
	{
		swapped = 0;
		i = 0;
		while(i < size - 1)
		{
			if(tab[i] > tab[i + 1])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				swapped = 1;
			}
			i++;
		}
	}

}

/*
#include <stdio.h>

int	main(void)
{
	int				tab[] = {42, -5, 0, 12, 3};
	unsigned int	size = 5;
	unsigned int	i;

	sort_int_tab(tab, size);
	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
