/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_int.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:42:32 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:21:50 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

int	*c_int(int val)
{
	int	*new;

	new = (int *) malloc(sizeof(int));
	if (!new)
		return (0);
	*new = val;
	return (new);
}
