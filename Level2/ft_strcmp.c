/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:48:46 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 15:10:53 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}

int main(void)
{
	printf("%d", ft_strcmp("abc", "abz"));
}
