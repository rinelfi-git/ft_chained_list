/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/06/04 17:38:22 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

typedef struct s_array		t_array;
typedef struct s_node		t_node;
typedef struct s_integer	t_integer;
struct s_array
{
	int		size;
	t_node	*first;
	t_node	*last;
};
struct s_node
{
	t_node	*prev;
	t_node	*next;
};

struct s_integer
{
	t_node	parent;
	int		val;
};
t_array	*array_create(t_node *n);
int		array_size(t_array *array);
int		node_index_of(t_array *array, t_node *n);
int		array_add(t_array *array, t_node *n);
void	array_add_at(t_array *array, t_node *n, int at);
t_node	*node_get(t_array *array, int index);
t_node	*node_remove(t_array *array, int index);
void	array_destruct(t_array *array);
void	node_destruct(t_node *n);
void	array_for_each(t_array *array, void (*callback)(int, t_node *));
#endif