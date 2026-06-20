#include <stdlib.h>
#include <stdio.h>


long get_len(long nbr)
{
	long len;

	len = 0;
	if(nbr <= 0)
	{
		len++;
		nbr = -nbr;
	}
	while(nbr > 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}
char *ft_itoa(int nbr)
{
	char *str;
	long len;
	long n; 

	n = nbr;
	len = get_len(nbr);
	str = malloc(sizeof(char) * len + 1);

	if(!str)
		return (NULL);
	str[len] = '\0';

	if(n == 0)
	{
		str[0] = '0';
		return (str);
	}
	if(n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while(n > 0)
	{
		len --;
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}
/*
int	main(void)
{
	printf("Test 1 (1234) : %s\n", ft_itoa(1234));
	printf("Test 2 (-567) : %s\n", ft_itoa(-567));
	printf("Test 3 (0)    : %s\n", ft_itoa(0));
	printf("Test 4 (MIN)  : %s\n", ft_itoa(-2147483648));
	return (0);
}
*/
