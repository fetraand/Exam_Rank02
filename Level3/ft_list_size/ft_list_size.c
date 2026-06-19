/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fetraand <fetraand@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 20:54:07 by fetraand          #+#    #+#             */
/*   Updated: 2026/06/18 20:58:16 by fetraand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
	int	count;
	count = 0;
	while(begin_list != NULL)
	{
		count ++;
		begin_list = begin_list->next;
	}
	return (count);
}
