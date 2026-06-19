/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 12:07:39 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 18:37:00 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n = n / 2;
    if (n == 1)
        return (1);
    return (0);
}

int is_p(unsigned int n)
{
    if(n == 0)
        return (0);
    while(n % 2 == 0)
        n = n / 2;
    if(n == 1)
        return (1);
    return (0);
}

#include <stdio.h>

int main(void)
{
    printf("%d \n", is_p(32));
   // printf("%d\n", is_power_of_2(32));
    return (0);
}
