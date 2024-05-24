/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:37:19 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 19:45:56 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"
#include <stdlib.h>

t_item	*item_create(t_type content)
{
	t_item	*_item_create;

	_item_create = (t_item *) malloc(sizeof(t_item));
	if (!_item_create)
		return (0);
	_item_create->content = content;
	_item_create->prev = 0;
	_item_create->next = 0;
	return (_item_create);
}
