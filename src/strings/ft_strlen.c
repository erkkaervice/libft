/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:32:14 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:20:51 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * Returns the length of the string `s` by counting characters until the null
 * terminator is reached.
 * 
 * Parameters:
 *   - s: The string whose length is to be determined.
 *
 * Return value:
 *   - The number of characters in the string, excluding the null terminator.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
