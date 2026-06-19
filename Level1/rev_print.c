/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 10:09:53 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 08:16:56 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i > 0)
    {
        i--;
        write(1, &str[i], 1);
    }
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		rev_print(argv[1]);
	write(1, "\n", 1);
	return (0);
}
