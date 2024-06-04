/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:57:47 by erijania          #+#    #+#             */
/*   Updated: 2024/06/04 16:56:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

static t_node	*detach(t_array *arr, t_node *it)
{
	if (!it)
		return (0);
	if (arr->first == it)
		arr->first = it->next;
	if (arr->last == it)
		arr->last = it->prev;
	if (it->prev)
		it->prev->next = it->next;
	if (it->next)
		it->next->prev = it->prev;
	it->next = 0;
	it->prev = 0;
	return (it);
}

static t_node	*remove_asc(t_array *arr, int index)
{
	int		i;
	t_node	*loop;

	i = 0;
	loop = arr->first;
	while (loop && i != index)
	{
		loop = loop->next;
		i++;
	}
	if (i != index)
		return (0);
	arr->size--;
	return (detach(arr, loop));
}

static t_node	*remove_desc(t_array *arr, int index)
{
	int		i;
	t_node	*loop;

	i = -1;
	loop = arr->last;
	while (loop && i != index)
	{
		loop = loop->next;
		i--;
	}
	if (i != index)
		return (0);
	arr->size--;
	return (detach(arr, loop));
}

t_node	*node_remove(t_array *arr, int index)
{
	if (!arr)
		return (0);
	if (index >= 0)
		return (remove_asc(arr, index));
	return (remove_desc(arr, index));
}
