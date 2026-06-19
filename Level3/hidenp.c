#include <unistd.h>

void	hidenp(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str2[j])
	{
		if (str1[i] == str2[j])
			i++;
		if (str1[i] == '\0')
		{
			write(1, "1", 1);
			return ;
		}
		j++;
	}
	if (str1[i] == '\0')
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
