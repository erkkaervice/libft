/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 18:15:19 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:13:48 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_putstr_fd - Writes a string to a given file descriptor.
 *
 * This function writes the string `s` to the file descriptor `fd` using 
 * the `write` system call. It first calculates the string's length with 
 * `ft_strlen` and then writes it to the specified file descriptor.
 *
 * Parameters:
 * - s: The string to be written.
 * - fd: The file descriptor where the string is written.
 *
 * Returns:
 * - This function does not return any value.
 */
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
