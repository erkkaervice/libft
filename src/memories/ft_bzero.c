/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:54:36 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:41:55 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_bzero - Fills a memory block with zeroes.
 *
 * This function sets the first `n` bytes of the memory area pointed to by `s` 
 * to zero. It is useful for clearing memory buffers or initializing arrays 
 * to a known state.
 *
 * Parameters:
 * - s: A pointer to the memory area to be filled with zeroes.
 * - n: The number of bytes to set to zero.
 *
 * Returns:
 * - None.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (n--)
		*p++ = 0;
}
