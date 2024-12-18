/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 15:32:21 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:30:47 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_strjoin - Concatenates two strings into a new dynamically allocated string.
 *
 * This function allocates memory for a new string and concatenates the contents 
 * of the two strings `s1` and `s2`. The resulting string is null-terminated. 
 * If memory allocation fails, it returns `NULL`. If either `s1` or `s2` is 
 * `NULL`, the behavior is undefined.
 *
 * Parameters:
 * - s1: The first string to concatenate.
 * - s2: The second string to concatenate.
 *
 * Returns:
 * - A pointer to the newly allocated string that contains the concatenated 
 * result, or `NULL` if memory allocation fails.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*stp;

	str = ft_newstr(ft_strlen(s1) + ft_strlen(s2));
	stp = str;
	if (!s1 || !s2)
		return (NULL);
	if (!str)
		return (NULL);
	while (*s1)
		*str++ = *s1++;
	while (*s2)
		*str++ = *s2++;
	*str = '\0';
	return (stp);
}
