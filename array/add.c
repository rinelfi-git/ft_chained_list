/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:15:42 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	array_add(t_array *array, t_item *item)
{
	t_item	*array_item;

	if (!array || !item)
		return (0);
	array_item = array->first;
	while (array_item != array->last && array_item != item)
		array_item = array_item->next;
	if (array_item == item)
		return (0);
	if (!array_item)
	{
		array->first = item;
		array->last = item;
	}
	else
	{
		array_item->next = item;
		item->prev = array_item;
		item->next = 0;
		array->last = item;
	}
	return (1);
}
