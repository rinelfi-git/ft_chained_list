/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 19:26:03 by erijania          #+#    #+#             */
/*   Updated: 2024/05/24 19:34:46 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

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

#endif