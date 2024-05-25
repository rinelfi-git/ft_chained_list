/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 07:52:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

typedef struct s_array	t_array;
typedef struct s_item	t_item;
struct s_array
{
	t_item	*first;
	t_item	*last;
};
struct s_item
{
	void	*value;
	void	(*f_value)(void *);
	t_item	*prev;
	t_item	*next;
};
t_array	*array_create(t_item *item);
t_item	*item_create(void	*value, void (*f_value)(void *));
int		array_size(t_array *array);
int		array_add(t_array *array, t_item *item);
void	array_add_at(t_array *array, t_item *item, int at);
t_item	*item_get(t_array *array, int index);
t_item	*item_remove(t_array *array, int index);
void	array_destruct(t_array *array);
void	item_destruct(t_item *item);
int		*c_int(int value);
long	*c_long(long value);
char	*c_char(char value);
#endif