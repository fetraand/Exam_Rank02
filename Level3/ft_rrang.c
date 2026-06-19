#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*rrange;
	int	size;
	int	i;

	// 1. Calcul de la taille (valeur absolue)
	if (end >= start)
		size = end - start + 1;
	else
		size = start - end + 1;

	// 2. Allocation
	rrange = (int *)malloc(sizeof(int) * size);
	if (rrange == NULL)
		return (NULL);

	// 3. Remplissage en partant de 'end'
	i = 0;
	while (i < size)
	{
		rrange[i] = end;
		if (end >= start)
			end--; // On descend vers start
		else
			end++; // On monte vers start
		i++;
	}
	return (rrange);
}
