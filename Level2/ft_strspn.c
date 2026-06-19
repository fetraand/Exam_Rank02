/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:59:41 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 17:46:38 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strspn retourne le nombre de caractères du début de s qui sont tous dans accept. ex: "hello world" et "helo" Résultat → 5

#include <stddef.h>
#include <stdio.h>
#include <string.h> // Pour la vraie fonction strspn

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break ;
            j++;
        }
        if (accept[j] == '\0')
            return (i);
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
/*
int main(void)
{
    size_t res_ft;
    size_t res_orig;

    res_ft = ft_strspn("abcdef", "abc");
    res_orig = strspn("abcdef", "abc");
    printf("Test 1 -> Ft: %zu | Orig: %zu\n", res_ft, res_orig); // Doit afficher 3

    res_ft = ft_strspn("123455abc5", "54321");
    res_orig = strspn("123455abc5", "54321");
    printf("Test 2 -> Ft: %zu | Orig: %zu\n", res_ft, res_orig); // Doit afficher 6 (l'ordre dans accept n'importe pas)

    res_ft = ft_strspn("hello", "xyz");
    res_orig = strspn("hello", "xyz");
    printf("Test 3 -> Ft: %zu | Orig: %zu\n", res_ft, res_orig); // Doit afficher 0

    return (0);
}
*/