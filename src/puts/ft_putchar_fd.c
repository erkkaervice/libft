/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:11:59 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:13:27 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putchar_fd - Writes a single character to a given file descriptor.
 *
 * This function writes the character `c` to the file descriptor `fd` using 
 * the `write` system call. If the operation succeeds, it writes the character 
 * to the specified file or output stream. The function does not return any 
 * value as its purpose is solely to perform the write operation.
 *
 * Parameters:
 * - c: The character to be written.
 * - fd: The file descriptor where the character is written.
 *         It can represent various outputs, e.g., 1 for stdout.
 *
 * Returns:
 * - This function does not return any value.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
