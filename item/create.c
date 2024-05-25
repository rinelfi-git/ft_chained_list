/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:37:19 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

t_item	*item_create(void *value, void (*f_value)(void *))
{
	t_item	*_item_create;

	_item_create = (t_item *) malloc(sizeof(t_item));
	if (!_item_create)
		return (0);
	_item_create->value = value;
	_item_create->f_value = 0;
	_item_create->prev = 0;
	_item_create->next = 0;
	if (f_value)
		_item_create->f_value = f_value;
	return (_item_create);
}
