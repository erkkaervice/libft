/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:14:49 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:11:19 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_printchar - Prints a single character to standard output.
 *
 * This function writes the given character `c` to the standard output using 
 * the `write` system call. If the write operation fails, the function returns 
 * -1 to indicate an error. Otherwise, it returns 1 to signify successful 
 * printing of the character.
 *
 * Parameters:
 * - c: The character to be printed.
 *
 * Returns:
 * - 1 if the character is successfully printed.
 * - -1 if there is an error during the write operation.
 */
int	ft_printchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	else
		return (1);
}
