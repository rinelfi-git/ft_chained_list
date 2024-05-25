/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:48:25 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 11:27:06 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

t_array	*array_create(t_item *item)
{
	t_array	*_array_create;

	_array_create = (t_array *)malloc(sizeof(t_array));
	if (!_array_create)
		return (0);
	_array_create->first = 0;
	_array_create->last = 0;
	if (item)
	{
		_array_create->first = item;
		_array_create->last = item;
	}
	return (_array_create);
}
