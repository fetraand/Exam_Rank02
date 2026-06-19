/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 07:25:56 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 18:11:47 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  inter affiche les caractères qui sont dans s1 ET dans s2, sans répétition, dans l'ordre de s1.
/*
"parisien" "naive" → aie
"aabbcc" "abc" → abc
"" "abc" → `` (vide)
"abc" "" → `` (vide)
*/
#include <unistd.h>

void    inter(char *s1, char *s2)
{
    int i;
    int j;
    int seen[256];

    i = 0;
    while(i < 256)
        seen[i++] = 0;
    i = 0;
    while(s1[i])
    {
        j = 0;
        while(s2[j] && s2[j] != s1[i])
            j++;
        if(s2[j] && !seen[(unsigned char)s1[i]])
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;
        }
        i++;
    }
}
int     main(int argc, char *argv[])
{
    if (argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}


//  cc -Wall -Wextra -Werror inter.c
//  ./a.out "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj"
//  Résultat attendu : padinto

