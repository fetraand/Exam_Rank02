/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:48:32 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/28 06:14:19 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    camel_to_snake(char *str)
{
    int i;
    
    i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            write(1, "_", 1);
            str[i] = str[i] + 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        camel_to_snake(argv[1]);
    write(1, "\n", 1);
    return (0);
}
