/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:58:18 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 07:20:12 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"
#include <stdlib.h>

void	list_destruct(t_list *list)
{
	t_item	*item;

	if (!list)
		return ;
	item = item_remove(list, 0);
	while (item)
	{
		item_destruct(item);
		item = item_remove(list, 0);
	}
	free(list);
	list = 0;
}
