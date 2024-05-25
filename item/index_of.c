/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:33:46 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 13:49:44 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	item_index_of(t_array *array, t_item *item)
{
	int		index;
	t_item	*loop;

	if (!array || !item)
		return (-1);
	index = 0;
	loop = array->first;
	while (loop && loop != item)
	{
		loop = loop->next;
		index++;
	}
	if (loop == item)
		return (index);
	return (-1);
}
