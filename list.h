/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 07:52:08 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list	t_list;
typedef struct s_item	t_item;
struct s_list
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
t_list	*list_create(t_item *item);
t_item	*item_create(void	*value, void (*f_value)(void *));
int		list_size(t_list *list);
int		list_add(t_list *list, t_item *item);
void	list_add_at(t_list *list, t_item *item, int at);
t_item	*item_get(t_list *list, int index);
t_item	*item_remove(t_list *list, int index);
void	list_destruct(t_list *list);
void	item_destruct(t_item *item);
int		*c_int(int value);
long	*c_long(long value);
char	*c_char(char value);
#endif