/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:06:19 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:49 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memcpy - Copies memory from one location to another.
 *
 * This function copies `n` bytes from the memory area `src` to the memory 
 * area `dst`. If either of the pointers is NULL, the function will return 
 * the `dst` pointer without performing any action. The function ensures 
 * that memory is copied safely.
 *
 * Parameters:
 * - dst: A pointer to the destination memory area.
 * - src: A pointer to the source memory area.
 * - n: The number of bytes to copy.
 *
 * Returns:
 * - A pointer to the destination memory area (`dst`).
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*dsp;

	dsp = dst;
	if (!dst && !src)
		return (dst);
	while (n--)
		*(char *)dst++ = *(const char *)src++;
	return (dsp);
}
