/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:58:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:20:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

void	array_destruct(t_array *arr)
{
	t_item	*elt;

	if (!arr)
		return ;
	elt = item_remove(arr, 0);
	while (elt)
	{
		item_destruct(elt);
		elt = item_remove(arr, 0);
	}
	free(arr);
	arr = 0;
}
