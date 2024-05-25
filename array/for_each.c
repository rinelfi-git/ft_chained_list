/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_each.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 20:10:44 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:20:52 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"

void	array_for_each(t_array *arr, void (*f)(int, t_item *))
{
	t_item	*loop;
	int		i;

	loop = arr->first;
	i = 0;
	while (loop)
	{
		f(i++, loop);
		loop = loop->next;
	}
}
