/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_long.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:42:32 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:22:00 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

long	*c_long(long val)
{
	long	*new;

	new = (long *) malloc(sizeof(long));
	if (!new)
		return (0);
	*new = val;
	return (new);
}
