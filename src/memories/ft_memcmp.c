/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:36:32 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:41 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memcmp - Compares two memory blocks byte by byte.
 *
 * This function compares the first `n` bytes of two memory blocks `s1` and 
 * `s2`. If the memory blocks are identical, the function returns 0. Otherwise, 
 * it returns a positive or negative value based on the first differing byte.
 * It is useful for comparing raw memory regions or buffers.
 *
 * Parameters:
 * - s1: The first memory block to compare.
 * - s2: The second memory block to compare.
 * - n: The number of bytes to compare.
 *
 * Returns:
 * - 0 if the memory blocks are identical, or the difference between the first
 *   differing byte.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;

	p1 = s1;
	p2 = s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
