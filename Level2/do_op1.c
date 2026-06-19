/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 06:17:21 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 14:46:59 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    do_op(char *num1, char *op, char *num2)
{
	int result;
	int n1;
	int n2;

	n1 = atoi(num1);
	n2 = atoi(num2);

	result = 0;
	if(op[1] == '\0')
	{
		if(op[0] == '+')
			result = n1 + n2;
		else if(op[0] == '-')
			result = n1 - n2;
		else if(op[0] == '*')
			result = n1 * n2;
		else if(op[0] == '%')
			result = n1 % n2;
		else if(op[0] == '/')
			result = n1 / n2;
		printf("%d", result);
	}
}

int main(int argc, char *argv[])
{
	if(argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	printf("\n");
	return (0);
}