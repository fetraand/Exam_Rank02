/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 09:38:54 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/26 10:48:26 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	repeat;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			repeat = (str[i] - 'a' + 1);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			repeat = (str[i] - 'A' + 1);
		else
			repeat = 1;
		while (repeat--)
			write(1, &str[i], 1);
		i++;
	}

}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
	return (0);
}


