/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:25:41 by erijania         ###   ########.fr       */
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
	void	*val;
	void	(*del)(void *);
	t_item	*prev;
	t_item	*next;
};
t_array	*array_create(t_item *it);
t_item	*item_create(void	*val, void (*del)(void *));
int		array_size(t_array *arr);
int		item_index_of(t_array *arr, t_item *it);
int		array_add(t_array *arr, t_item *it);
void	array_add_at(t_array *arr, t_item *it, int at);
t_item	*item_get(t_array *arr, int index);
t_item	*item_remove(t_array *arr, int index);
void	array_destruct(t_array *arr);
void	item_destruct(t_item *it);
int		*c_int(int val);
long	*c_long(long val);
char	*c_char(char val);
void	array_for_each(t_array *arr, void (*f)(int, t_item *));
#endif