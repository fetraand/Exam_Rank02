#include <unistd.h>
#include <stdio.h>

int get_digit(char c, int base)
{
	int value;

	if(c >= '0' && c <= '9')
		value = c - '0';
	else if(c >= 'a' && c <= 'z')
		value = c - 'a' + 10;
	else if(c >= 'A' && c <= 'Z')
		value = c - 'A' + 10;
	else
		return (-1);
	if(value >= base)
		return (-1);
	return (value);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int result;
	int digit;

	i = 0;
	sign = 1;
	result = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i])
	{
		digit = get_digit(str[i], str_base);
		if(digit == -1)
			break ;
		result = (result * str_base) + digit;
		i++;
	}
	return (sign * result);

}

int main(void)
{
	//printf("%d", ft_atoi_base("3", 2));
	printf("%d\n", ft_atoi_base("1010", 2));
}