#include <unistd.h>
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	result;
	unsigned int i;

	if(tab == NULL || len == 0)
		return (0);
	result = tab[0];
	i = 1;
	while(i < len)
	{
		if(tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}

int main(void)
{
	int test[1000] = {1, 3, 100, 134 ,34525, 78};
	printf("%d", max(test, 6));
	return (0);
}

int max(int *tab, unsigned int len)
{
	int result;
	int i;

	if(tab == NULL || len == 0)
		return (0);
	result = tab[0];

	i = 1;
	while(i < len)
	{
		if(result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}
