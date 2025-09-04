/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 18:00:00 by eala-lah          #+#    #+#             */
/*   Updated: 2025/09/04 18:00:00 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_array_len - Calculates the length of a NULL-terminated array.
 *
 * This function counts the number of elements in a NULL-terminated array of
 * pointers. It loops through each element until a NULL pointer is encountered,
 * returning the count of elements.
 *
 * Parameters:
 * - arr: A NULL-terminated array of pointers.
 *
 * Returns:
 * - The number of elements in the array, or 0 if `arr` is NULL.
 */
int	ft_array_len(void **arr)
{
	int	len;

	len = 0;
	if (!arr)
		return (0);
	while (arr[len])
		len++;
	return (len);
}
