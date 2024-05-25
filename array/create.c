/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:48:25 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:20:37 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

t_array	*array_create(t_item *it)
{
	t_array	*new;

	new = (t_array *)malloc(sizeof(t_array));
	if (!new)
		return (0);
	new->first = 0;
	new->last = 0;
	if (it)
	{
		new->first = it;
		new->last = it;
	}
	return (new);
}
