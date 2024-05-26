/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:27:58 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:23:38 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

static t_item	*get_asc(t_array *arr, int index)
{
	int		i;
	t_item	*loop;

	i = 0;
	loop = arr->first;
	while (loop && i != index)
	{
		loop = loop->next;
		i++;
	}
	if (i == index)
		return (loop);
	return (0);
}

static t_item	*get_desc(t_array *arr, int index)
{
	int		i;
	t_item	*loop;

	i = -1;
	loop = arr->last;
	while (loop && i != index)
	{
		loop = loop->prev;
		i--;
	}
	if (i == index)
		return (loop);
	return (0);
}

t_item	*item_get(t_array *arr, int index)
{
	if (!arr)
		return (0);
	if (index >= 0)
		return (get_asc(arr, index));
	return (get_desc(arr, index));
}
