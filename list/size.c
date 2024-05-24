/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:10:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 20:28:59 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"

int	list_size(t_list *list)
{
	int		_list_size;
	t_item	*item;

	_list_size = 0;
	if (!list)
		return (_list_size);
	item = list->first;
	while (item)
	{
		item = item->next;
		_list_size++;
	}
	return (_list_size);
}
