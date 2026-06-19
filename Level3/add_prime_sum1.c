#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if(nbr >= 0 && nbr <= 9)
		ft_putchar(nbr + '0');
	else if(nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
}

int ft_atoi(char *str)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int is_prime(int n)
{
	int i;

	if(n <= 1)
		return (0);
	i = 2;
	while(i * i <= n)
	{
		if(n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	add_prime_sum(char *str)
{
	int n;
	int i;
	int sum;

	n = ft_atoi(str);
	sum = 0;
	if(n <= 1)
	{
		write(1, "0", 1);
		return;
	}
	
	i = 2;
	while(i <= n)
	{
		if(is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 
	if(argc == 2)
		add_prime_sum(argv[1]);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	return (0);
}