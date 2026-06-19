/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:48:21 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 16:29:00 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ft_strcspn retourne le nombre de caractères du début de s qui ne contient aucun caractère de reject.

#include <stddef.h>
#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t i;
	size_t j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

int main(void)
{
	printf("%zu", ft_strcspn("salut", "ut"));
}
