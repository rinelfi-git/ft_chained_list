/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:37:19 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:22:16 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

t_item	*item_create(void *val, void (*del)(void *))
{
	t_item	*new;

	new = (t_item *) malloc(sizeof(t_item));
	if (!new)
		return (0);
	new->val = val;
	new->del = 0;
	new->prev = 0;
	new->next = 0;
	if (del)
		new->del = del;
	return (new);
}
