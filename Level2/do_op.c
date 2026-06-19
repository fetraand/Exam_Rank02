/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 10:48:37 by fetraand          #+#    #+#             */
/*   Updated: 2026/05/29 08:06:17 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    do_op(char *num1, char *op, char *num2)
{
    int n1;
    int n2;
    int result;

    n1 = atoi(num1);
    n2 = atoi(num2);
    result = 0;
    if (op[0] == '+')
        result = n1 + n2;
    else if (op[0] == '-')
        result = n1 - n2;
    else if (op[0] == '*')
        result = n1 * n2;
    else if (op[0] == '/')
        result = n1 / n2;
    else if (op[0] == '%')
        result = n1 % n2;
    printf("%d", result);
}

int main(int argc, char *argv[])
{
    if (argc == 4)
        do_op(argv[1], argv[2], argv[3]);
    printf("\n");
    return (0);
}
