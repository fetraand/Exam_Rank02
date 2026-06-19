/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 07:38:29 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 17:10:21 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int start;
	int end;
	char tmp;

	end = 0;
	while (str[end])
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

int main(void)
{
	char test[] = "hello";
	ft_strrev(test);
	printf("%s", test);
}