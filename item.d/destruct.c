/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destruct.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 06:55:55 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:22:32 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

void	item_destruct(t_item *it)
{
	if (!it)
		return ;
	if (it->del)
		it->del(it->val);
	free(it);
	it = 0;
}
