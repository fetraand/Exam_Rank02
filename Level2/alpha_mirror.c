/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:48:28 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/28 06:07:33 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    alpha_mirror(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'Z' - str[i] + 'A';
        else if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - str[i] + 'a';
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        alpha_mirror(argv[1]);
    write(1, "\n", 1);
    return (0);
}
