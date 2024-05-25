/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:10:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	array_size(t_array *array)
{
	int		_array_size;
	t_item	*item;

	_array_size = 0;
	if (!array)
		return (_array_size);
	item = array->first;
	while (item)
	{
		item = item->next;
		_array_size++;
	}
	return (_array_size);
}
