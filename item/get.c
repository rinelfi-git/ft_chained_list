/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:27:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

static t_item	*get_asc(t_array *array, int index)
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
	if (i == index)
		return (item);
	return (0);
}

static t_item	*get_desc(t_array *array, int index)
{
	int		i;
	t_item	*item;

	i = -1;
	item = array->last;
	while (item && i != index)
	{
		item = item->prev;
		i--;
	}
	if (i == index)
		return (item);
	return (0);
}

t_item	*item_get(t_array *array, int index)
{
	if (!array)
		return (0);
	if (index >= 0)
		return (get_asc(array, index));
	return (get_desc(array, index));
}
