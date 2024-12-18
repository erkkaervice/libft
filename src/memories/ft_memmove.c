/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:20:04 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:58 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memmove - Safely moves memory from one location to another.
 *
 * This function moves `n` bytes from the memory area `src` to the memory area 
 * `dst`, ensuring that overlapping regions are correctly handled. If `dst` and 
 * `src` overlap, the function copies the data to a temporary buffer before 
 * moving it, avoiding data corruption.
 *
 * Parameters:
 * - dst: A pointer to the destination memory area.
 * - src: A pointer to the source memory area.
 * - n: The number of bytes to move.
 *
 * Returns:
 * - A pointer to the destination memory area (`dst`).
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dsp;

	dsp = dst;
	if (dst == src)
		return (dst);
	if (dst > src)
	{
		while (len--)
			((char *)dst)[len] = ((char *)src)[len];
	}
	else
	{
		while (len--)
			*(char *)dst++ = *(char *)src++;
	}
	return (dsp);
}
