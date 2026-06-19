#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	putnbr(int nbr)
{
	if(nbr >=0 && nbr <= 9)
		ft_putchar(nbr + '0');
	else if(nbr > 9)
	{
		putnbr(nbr / 10);
		putnbr(nbr % 10);
	}
}

int	main(int argc, char *argv[])
{
	(void)argv;

	putnbr(argc - 1);
	write(1, "\n", 1);
	return (0);
}