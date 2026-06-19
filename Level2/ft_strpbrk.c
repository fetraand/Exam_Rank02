/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:26:17 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 16:44:19 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strpbrk (pbrk = pointer break) retourne un pointeur vers le premier caractère de s1 qui apparaît dans s2, ou NULL si aucun n'est trouvé.

#include <stddef.h>
#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i;
    int j;

    i = 0;
    while (s1[i])
    {
        j = 0;
        while (s2[j])
        {
            if (s1[i] == s2[j])
                return ((char *)&s1[i]);
            j++;
        }
        i++;
    }
    return (NULL);
}

/*
int main(void)
{
	char *res;

	res = ft_strpbrk("hello world", "od");
	if (res != NULL)
		printf("Trouvé ! Reste de la chaîne : %s\n", res);
	else
		printf("Aucune correspondance trouvée.\n");
	return (0);
}
*/
