/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:57:47 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

static t_item	*detach(t_array *array, t_item *item)
{
	if (!item)
		return (0);
	if (array->first == item)
		array->first = item->next;
	if (array->last == item)
		array->last = item->prev;
	if (item->prev)
		item->prev->next = item->next;
	if (item->next)
		item->next->prev = item->prev;
	item->next = 0;
	item->prev = 0;
	return (item);
}

static t_item	*remove_asc(t_array *array, int index)
{
	int		i;
	t_item	*item;

	i = 0;
	item = array->first;
	while (item && i != index)
	{
		item = item->next;
		i++;
	}
	if (i != index)
		return (0);
	return (detach(array, item));
}

static t_item	*remove_desc(t_array *array, int index)
{
	int		i;
	t_item	*item;

	i = -1;
	item = array->last;
	while (item && i != index)
	{
		item = item->next;
		i--;
	}
	if (i != index)
		return (0);
	return (detach(array, item));
}

t_item	*item_remove(t_array *array, int index)
{
	if (!array)
		return (0);
	if (index >= 0)
		return (remove_asc(array, index));
	return (remove_desc(array, index));
}
