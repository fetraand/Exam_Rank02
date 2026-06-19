/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 08:49:18 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/28 08:54:28 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if(n == 0)
        return (0);
    while(n % 2 == 0)
        n = n / 2;
    if (n == 1)
        return(1);
    return (0);
}

int main(void)
{
    printf("%d", is_power_of_2(56));
}