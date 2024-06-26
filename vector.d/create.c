/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:48:25 by erijania          #+#    #+#             */
/*   Updated: 2024/06/06 10:45:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

static t_node	*vec_clone(t_node *self)
{
	t_vector	*clone;
	t_vector	*cast;
	t_node		*n;

	if (!self)
		return (0);
	clone = vec_new(0);
	cast = (t_vector *) self;
	n = cast->first;
	while (n)
	{
		vec_add(clone, n->clone(n));
		n = n->next;
	}
	return ((t_node *)clone);
}

static void	destructor(t_node *self)
{
	vec_destruct((t_vector *) self);
}

t_vector	*vec_new(t_node *it)
{
	t_vector	*new;

	new = (t_vector *)malloc(sizeof(t_vector));
	if (!new)
		exit (0);
	new->node.prev = 0;
	new->node.next = 0;
	new->node.clone = vec_clone;
	new->node.destruct = destructor;
	new->first = 0;
	new->last = 0;
	new->size = 0;
	if (it)
	{
		new->first = it;
		new->last = it;
		new->size++;
	}
	return (new);
}
