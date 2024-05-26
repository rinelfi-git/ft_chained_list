/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c_char.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erijania <erijania@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 07:42:32 by erijania          #+#    #+#             */
/*   Updated: 2024/05/25 20:21:32 by erijania         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../array.h"
#include <stdlib.h>

char	*c_char(char val)
{
	char	*new;

	new = (char *) malloc(sizeof(char));
	if (!new)
		return (0);
	*new = val;
	return (new);
}
