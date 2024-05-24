/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:27:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 20:54:55 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"

static t_item	*get_asc(t_list *list, int index)
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
	if (i == index)
		return (item);
	return (0);
}

static t_item	*get_desc(t_list *list, int index)
{
	int		i;
	t_item	*item;

	i = -1;
	item = list->last;
	while (item && i != index)
	{
		item = item->prev;
		i--;
	}
	if (i == index)
		return (item);
	return (0);
}

t_item	*item_get(t_list *list, int index)
{
	if (!list)
		return (0);
	if (index >= 0)
		return (get_asc(list, index));
	return (get_desc(list, index));
}
