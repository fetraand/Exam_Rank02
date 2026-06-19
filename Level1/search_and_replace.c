/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 11:42:12 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 08:29:35 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	search_and_replace(char *str, char search, char replace)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if(str[i] == search)
			write(1, &replace, 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if(	(argv[2][0] != '\0' && argv[2][1] == '\0') && 
			(argv[3][0] != '\0' && argv[3][1] == '\0'))
			search_and_replace(argv[1], argv[2][0], argv[3][0]);
	}
	write(1, "\n", 1);
	return (0);
}