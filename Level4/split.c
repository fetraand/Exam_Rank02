#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int	count_words(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			count++;
			while (str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}

char	*word_dup(char *str, int start, int end)
{
	char	*word;
	int		i;

	word = malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str)
{
	char	**tab;
	int		i;
	int		w;
	int		start;

	if (!str)
		return (NULL);
	tab = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	w = 0;
	while (str[i])
	{
		while (str[i] && is_space(str[i]))
			i++;
		if (str[i] && !is_space(str[i]))
		{
			start = i;
			while (str[i] && !is_space(str[i]))
				i++;
			tab[w] = word_dup(str, start, i);
			w++;
		}
	}
	tab[w] = NULL;
	return (tab);
}

#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	char	*str = "   Salut,   ca va   le  poney ? \t\n  ";
	char	**result;
	int		i;

	result = ft_split(str);
	i = 0;
	while (result[i] != NULL)
	{
		printf("Mot: %s\n", result[i]);
		free(result[i]); // Libération de chaque mot
		i++;
	}
	free(result); // Libération du tableau global
	return (0);
}
