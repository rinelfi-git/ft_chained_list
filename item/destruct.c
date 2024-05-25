/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:55:55 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 07:18:40 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"
#include <stdlib.h>

void	item_destruct(t_item *item)
{
	if (!item)
		return ;
	if (item->content_destruct)
		item->content_destruct(item->content);
	free(item);
	item = 0;
}
