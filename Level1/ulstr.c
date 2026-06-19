/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 20:36:48 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/26 12:16:31 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// revoir: ./a.out "Salut le monde 77 1!@#$%&*()_+++"
#include <unistd.h>

void ulstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
			write(1, &str[i], 1);
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
			write(1, &str[i], 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ulstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
