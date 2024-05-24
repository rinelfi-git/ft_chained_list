/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:14:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 22:07:25 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"

static void	attach(t_list *list, t_item *item, t_item *after)
{
	if (after == list->first)
		list->first = item;
	if (after->prev)
	{
		after->prev->next = item;
		item->prev = after->prev;
	}
	item->next = after;
	after->prev = item;
}

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

void	list_add_at(t_list *list, t_item *item, int at)
{
	int		i;
	t_item	*list_item;

	if (!list || !item || at < 0 || at >= list_size(list))
		return ;
	i = 0;
	item = detach(list, item);
	list_item = list->first;
	while (list_item && i != at)
	{
		list_item = list_item->next;
		i++;
	}
	if (!list_item)
		list_add(list, item);
	else
		attach(list, item, list_item);
}
