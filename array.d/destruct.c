/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:58:18 by erijania          #+#    #+#             */
/*   Updated: 2024/06/04 17:01:33 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.h"
#include <stdlib.h>

void	array_destruct(t_array *arr)
{
	t_node	*elt;

	if (!arr)
		return ;
	elt = node_remove(arr, 0);
	while (elt)
	{
		node_destruct(elt);
		elt = node_remove(arr, 0);
	}
	free(arr);
	arr = 0;
}
