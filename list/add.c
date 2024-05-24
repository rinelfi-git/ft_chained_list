/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:15:42 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 22:09:55 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"

int	list_add(t_list *list, t_item *item)
{
	t_item	*list_item;

	if (!list || !item)
		return (0);
	list_item = list->first;
	while (list_item != list->last && list_item != item)
		list_item = list_item->next;
	if (list_item == item)
		return (0);
	if (!list_item)
	{
		list->first = item;
		list->last = item;
	}
	else
	{
		list_item->next = item;
		item->prev = list_item;
		item->next = 0;
		list->last = item;
	}
	return (1);
}
