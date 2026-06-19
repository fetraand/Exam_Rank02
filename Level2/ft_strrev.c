/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 11:57:23 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 17:11:14 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		start;
	int		end;
	char	tmp;

	end = 0;
	while(str[end])
		end++;
	end--;

	start = 0;
	while(start < end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char test[] = "hello";
	ft_strrev(test);
	printf("%s", test);
}
*/