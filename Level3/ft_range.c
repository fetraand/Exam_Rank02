#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	*range;
	int	size;
	int	i;

	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	range = malloc(sizeof(int) * size);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		range[i] = start;
		if (start < end)
			start++;
		else if (start > end)
			start--;
		i++;
	}
	return (range);
}

int	*ft_range1(int start, int end)
{
	int *range;
	int size;
	int i;

	if(start < end)
		size = end - start + 1;
	else if(start > end)
		size = start - end + 1;
	 
	range = malloc(sizeof(int) * (size + 1));
	if (range == NULL)
		return (NULL);
	i = 0;
	while(i < size)
	{
		range[i] = start;
		if(start < end)
			start++;
		else if(start > end)
			start--;
		i++;
	}
	return (range);
}

/*
int	main(void)
{
	
	int	*tab;
	int	i;

	// Tu testes le cas le plus fourbe (décroissant avec des négatifs)
	tab = ft_range1(0, -3);
	
	i = 0;
	// Comme tu sais qu'il y a 4 éléments (0, -1, -2, -3), tu boucles 4 fois
	while (i < 4)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return (0);
	
}
*/