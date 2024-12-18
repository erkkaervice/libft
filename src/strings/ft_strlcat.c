/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 14:56:50 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:31:23 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strlcat - Appends a string to another with a specified buffer size.
 *
 * This function appends the string `src` to the string `dst`, ensuring that 
 * the total length of `dst` does not exceed the size `dstsize`. The function 
 * returns the total length of the string that would be created if there were 
 * enough space in the buffer. It does not null-terminate the result if the 
 * buffer size is insufficient.
 *
 * Parameters:
 * - dst: The destination string to which `src` is appended.
 * - src: The source string to append to `dst`.
 * - dstsize: The size of the buffer `dst` points to.
 *
 * Returns:
 * - The total length of the string that would have been created if there was 
 *   enough space in `dst`. This is the length of `src` plus the initial length 
 *   of `dst`.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	del;
	size_t	sol;
	size_t	i;

	del = 0;
	sol = 0;
	i = 0;
	while (del < dstsize && dst[del] != '\0')
		del++;
	while (src[sol] != '\0')
		sol++;
	while (src[i] != '\0' && del + i + 1 < dstsize)
	{
		dst[del + i] = src[i];
		i++;
	}
	if (del < dstsize)
		dst[del + i] = '\0';
	return (del + sol);
}
