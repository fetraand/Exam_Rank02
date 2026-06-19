/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 21:16:10 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/25 21:17:06 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_union(char *s1, char *s2)
{
    int i;
    int seen[256];

    i = 0;
    while (i < 256)
    {
        seen[i] = 0;
        i++;
    }
    i = 0;
    while (s1[i])
    {
        if (seen[(unsigned char)s1[i]] == 0)
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;
        }
        i++;
    }
    i = 0;
    while (s2[i])
    {
        if (seen[(unsigned char)s2[i]] == 0)
        {
            write(1, &s2[i], 1);
            seen[(unsigned char)s2[i]] = 1;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 3)
        ft_union(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}
