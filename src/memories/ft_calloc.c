/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 12:45:31 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:01 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_calloc - Allocates memory for an array and initializes it to zero.
 *
 * This function allocates a block of memory large enough to store an array of 
 * `count` elements, each of `size` bytes. The allocated memory is initialized 
 * to zero using `ft_bzero` to ensure that the allocated space is blank and safe 
 * for use.
 * If allocation fails, it returns NULL and sets the `errno` to `ENOMEM`.
 *
 * Parameters:
 * - count: The number of elements in the array.
 * - size: The size of each element in the array.
 *
 * Returns:
 * - A pointer to the allocated memory block, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size)
{
	void			*mem;
	unsigned char	*ptr;
	unsigned char	*end;

	mem = malloc(count * size);
	ptr = mem;
	end = ptr + (count * size);
	if (!mem)
	{
		errno = ENOMEM;
		return (NULL);
	}
	if (count && size && count > (SIZE_MAX / size))
		return (NULL);
	while (ptr < end)
		*ptr++ = 0;
	return (mem);
}
