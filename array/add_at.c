/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_at.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 21:14:49 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:19:59 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

static void	attach(t_array *arr, t_item *it, t_item *after)
{
	if (after == arr->first)
		arr->first = it;
	if (after->prev)
	{
		after->prev->next = it;
		it->prev = after->prev;
	}
	it->next = after;
	after->prev = it;
}

static t_item	*detach(t_array *arr, t_item *it)
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

void	array_add_at(t_array *arr, t_item *it, int at)
{
	int		i;
	t_item	*elt;

	if (!arr || !it || at < 0 || at >= array_size(arr))
		return ;
	i = 0;
	it = detach(arr, it);
	elt = arr->first;
	while (elt && i != at)
	{
		elt = elt->next;
		i++;
	}
	if (!elt)
		array_add(arr, it);
	else
		attach(arr, it, elt);
}
