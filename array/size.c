/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 20:10:04 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:21:15 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

int	array_size(t_array *arr)
{
	int		size;
	t_item	*loop;

	size = 0;
	if (!arr)
		return (size);
	loop = arr->first;
	while (loop)
	{
		loop = loop->next;
		size++;
	}
	return (size);
}
