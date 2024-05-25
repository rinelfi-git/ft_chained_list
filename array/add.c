/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:15:42 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:19:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	array_add(t_array *arr, t_item *it)
{
	t_item	*elt;

	if (!arr || !it)
		return (0);
	elt = arr->first;
	while (elt != arr->last && elt != it)
		elt = elt->next;
	if (elt == it)
		return (0);
	if (!elt)
	{
		arr->first = it;
		arr->last = it;
	}
	else
	{
		elt->next = it;
		it->prev = elt;
		it->next = 0;
		arr->last = it;
	}
	return (1);
}
