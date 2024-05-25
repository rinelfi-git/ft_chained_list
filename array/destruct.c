/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:58:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

void	array_destruct(t_array *array)
{
	t_item	*item;

	if (!array)
		return ;
	item = item_remove(array, 0);
	while (item)
	{
		item_destruct(item);
		item = item_remove(array, 0);
	}
	free(array);
	array = 0;
}
