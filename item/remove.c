/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:57:47 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 21:43:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"

static t_item	*detach(t_list *list, t_item *item)
{
	if (!item)
		return (0);
	if (list->first == item)
		list->first = item->next;
	if (list->last == item)
		list->last = item->prev;
	if (item->prev)
		item->prev->next = item->next;
	if (item->next)
		item->next->prev = item->prev;
	item->next = 0;
	item->prev = 0;
	return (item);
}

static t_item	*remove_asc(t_list *list, int index)
{
	int		i;
	t_item	*item;

	i = 0;
	item = list->first;
	while (item && i != index)
	{
		item = item->next;
		i++;
	}
	if (i != index)
		return (0);
	return (detach(list, item));
}

static t_item	*remove_desc(t_list *list, int index)
{
	int		i;
	t_item	*item;

	i = -1;
	item = list->last;
	while (item && i != index)
	{
		item = item->next;
		i--;
	}
	if (i != index)
		return (0);
	return (detach(list, item));
}

t_item	*item_remove(t_list *list, int index)
{
	if (!list)
		return (0);
	if (index >= 0)
		return (remove_asc(list, index));
	return (remove_desc(list, index));
}
