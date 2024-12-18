/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 15:04:35 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:42 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_printstr - Prints a string to standard output.
 *
 * This function prints a string passed as a parameter. If the string is `NULL`, 
 * it prints the literal string "(null)". The length of the string is determined 
 * using `ft_strlen` and passed to the `write` function for printing.
 *
 * Parameters:
 * - s: The string to be printed.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
int	ft_printstr(char const *s)
{
	if (!s)
		return (write(1, "(null)", 6));
	return (write(1, s, ft_strlen(s)));
}
