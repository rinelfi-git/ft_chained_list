/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 21:43:56 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H
# include <stdio.h>

typedef struct s_list	t_list;
typedef struct s_item	t_item;
typedef char *			t_type;
struct s_list
{
	t_item	*first;
	t_item	*last;
};
struct s_item
{
	t_type	content;
	t_item	*prev;
	t_item	*next;
};
t_list	*list_create(t_item *item);
t_item	*item_create(t_type content);
int		list_size(t_list *list);
int		list_add(t_list *list, t_item *item);
void	list_add_at(t_list *list, t_item *item, int at);
t_item	*item_get(t_list *list, int index);
t_item	*item_remove(t_list *list, int index);
#endif