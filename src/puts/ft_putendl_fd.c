/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:24:52 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:29:39 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putendl_fd - Writes a string followed by a newline to a given file 
 * descriptor.
 *
 * This function writes the string `s` to the file descriptor `fd`, followed 
 * by a newline character. It uses the `write` system call to perform both 
 * operations. The string's length is determined using `ft_strlen`, and the 
 * newline is written separately to ensure proper formatting.
 *
 * Parameters:
 * - s: The string to be written.
 * - fd: The file descriptor where the string and newline are written.
 *
 * Returns:
 * - This function does not return any value.
 */
void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}
