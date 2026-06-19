/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 08:52:18 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 20:25:32 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    snake_to_camel(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] == '_')
        {
            i++;
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char *argv[])
{
    if (argc == 2)
        snake_to_camel(argv[1]);
    write(1, "\n", 1);
    return (0);
}
