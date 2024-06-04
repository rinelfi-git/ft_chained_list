/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:10:44 by erijania          #+#    #+#             */
/*   Updated: 2024/06/04 17:03:49 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"

void	array_for_each(t_array *arr, void (*callback)(int, t_node *))
{
	t_node	*loop;
	int		i;

	loop = arr->first;
	i = 0;
	while (loop)
	{
		callback(i++, loop);
		loop = loop->next;
	}
}
