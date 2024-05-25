/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:14:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

static void	attach(t_array *array, t_item *item, t_item *after)
{
	if (after == array->first)
		array->first = item;
	if (after->prev)
	{
		after->prev->next = item;
		item->prev = after->prev;
	}
	item->next = after;
	after->prev = item;
}

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

void	array_add_at(t_array *array, t_item *item, int at)
{
	int		i;
	t_item	*array_item;

	if (!array || !item || at < 0 || at >= array_size(array))
		return ;
	i = 0;
	item = detach(array, item);
	array_item = array->first;
	while (array_item && i != at)
	{
		array_item = array_item->next;
		i++;
	}
	if (!array_item)
		array_add(array, item);
	else
		attach(array, item, array_item);
}
