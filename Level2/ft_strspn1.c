/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 07:50:31 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 17:52:44 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

// ft_strspn retourne le nombre de caractères du début de s qui sont tous dans accept. ex: "hello world" et "helo" Résultat → 5

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;

    i = 0;
    while(s[1])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
                break;
            j++;
        }
        if(accept[j] == '\0')
            return(i);
        i++;
    }
    return (i);
}

int main(void)
{
    printf("%zu\n", ft_strspn("abcdef", "fedcab"));
    printf("%zu\n", strspn("abcdef", "fedcab"));
    return (0);
}