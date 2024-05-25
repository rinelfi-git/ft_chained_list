/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_of.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 12:33:46 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:23:53 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	item_index_of(t_array *arr, t_item *it)
{
	int		i;
	t_item	*loop;

	if (!arr || !it)
		return (-1);
	i = 0;
	loop = arr->first;
	while (loop && loop != it)
	{
		loop = loop->next;
		i++;
	}
	if (loop == it)
		return (i);
	return (-1);
}
