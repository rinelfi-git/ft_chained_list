/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_long.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:42:32 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 07:53:31 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../list.h"
#include <stdlib.h>

long	*c_long(long value)
{
	long	*_c_long;

	_c_long = (long *) malloc(sizeof(long));
	if (!_c_long)
		return (0);
	*_c_long = value;
	return (_c_long);
}
