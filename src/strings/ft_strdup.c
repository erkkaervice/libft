/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:39:57 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:19:17 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strdup - Creates a duplicate of a given string.
 *
 * This function allocates memory for a new string and copies the contents 
 * of the string `s1` into it. The new string is null-terminated. If memory 
 * allocation fails, the function sets `errno` to `ENOMEM` and returns `NULL`.
 *
 * Parameters:
 * - s1: The string to duplicate.
 *
 * Returns:
 * - A pointer to the newly allocated string that is a duplicate of `s1`, 
 *   or `NULL` if memory allocation fails.
 */
char	*ft_strdup(const char *s1)
{
	char	*dst;
	char	*sta;

	dst = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	sta = dst;
	if (!s1 || !dst)
	{
		errno = ENOMEM;
		free (dst);
		return (NULL);
	}
	while (*s1)
	{
		*dst = *s1;
		dst++;
		s1++;
	}
	*dst = '\0';
	return (sta);
}
