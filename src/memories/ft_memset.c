/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:38:39 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 15:57:16 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memset - Sets a block of memory to a specific byte.
 *
 * This function sets the first `len` bytes of the memory block pointed to by 
 * `b` to the byte value `c`. It is commonly used to initialize or clear 
 * memory, such as setting buffers to zero or another default value.
 * The function iterates over the memory block and assigns the specified byte 
 * value `c` to each byte in the block.
 *
 * Parameters:
 * - b: A pointer to the memory block to be set.
 * - c: The byte value to set each byte to.
 * - len: The number of bytes to set.
 *
 * Returns:
 * - A pointer to the memory block `b` after it has been modified.
 */
void	*ft_memset(void *b, int c, size_t len)
{
	void	*s;

	s = b;
	while (len--)
		*(unsigned char *)b++ = (unsigned char)c;
	return (s);
}
