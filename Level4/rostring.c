#include <unistd.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *str)
{
	int	i;
	int	start;
	int	end;
	int	has_printed;

	if (!str)
		return ;
	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	start = i;
	while (str[i] && !is_space(str[i]))
		i++;
	end = i;
	while (str[i] && is_space(str[i]))
		i++;
	has_printed = 0;
	while (str[i])
	{
		if (is_space(str[i]))
		{
			while (str[i] && is_space(str[i]))
				i++;
			if (str[i])
				write(1, " ", 1);
		}
		else
		{
			write(1, &str[i], 1);
			has_printed = 1;
			i++;
		}
	}
	if (start < end)
	{
		if (has_printed == 1)
			write(1, " ", 1);
		while (start < end)
		{
			write(1, &str[start], 1);
			start++;
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc >= 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
