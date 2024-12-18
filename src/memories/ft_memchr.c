/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:26:56 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:42:16 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_memchr - Searches for the first occurrence of a byte in memory.
 *
 * This function scans the first `n` bytes of the memory area pointed to by `s` 
 * for the first occurrence of the byte `c`. If the byte is found, a pointer 
 * to it is returned. If the byte is not found, the function returns NULL.
 *
 * Parameters:
 * - s: The memory area to be searched.
 * - c: The byte to search for.
 * - n: The number of bytes to search.
 *
 * Returns:
 * - A pointer to the first occurrence of `c` in `s`, or NULL if not found.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}
