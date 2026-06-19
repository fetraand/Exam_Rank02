/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:28:44 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 14:19:38 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] = 'z' - str[i] + 'a';
		else if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] = 'Z' - str[i] + 'A';
		write(1, &str[i], 1);
		i++;
	}
	
}

int	main(int argc, char *argv[])
{
	if(argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return (0);
}