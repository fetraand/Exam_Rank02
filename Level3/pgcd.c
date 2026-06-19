#include <stdio.h>
#include <stdlib.h>

void	pgcd(unsigned int a, unsigned int b)
{
	unsigned int	temp;

	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	printf("%u", a);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		pgcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}


void pgcd(unsigned int a, unsigned int b)
{
	unsigned int tmp;
	while(b != 0)
	{
		tmp = b;
		b = a % b;
		a = tmp;
	}
	printf("%u", a);
}