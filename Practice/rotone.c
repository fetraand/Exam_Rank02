/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:24:27 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/17 18:35:05 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rotone(char *str)
{
	int	i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c == 'z')
			write(1, "a", 1);
		else if (c == 'Z')
			write(1, "A", 1);
		else if ((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
		{
			c++;
			write(1, &c, 1);
		}
		else
			write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
