/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:48:25 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 20:01:30 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"
#include <stdlib.h>

t_list	*list_create(t_item *item)
{
	t_list	*_list_create;

	_list_create = (t_list *)malloc(sizeof(t_list));
	if (!_list_create)
		return (0);
	_list_create->first = 0;
	_list_create->last = 0;
	if (item)
	{
		_list_create->first = item;
		_list_create->last = item;
	}
	return (_list_create);
}
