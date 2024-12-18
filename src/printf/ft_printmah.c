/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printmah.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:09:06 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:11:45 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_hexacon - Recursively converts and prints a number in hexadecimal format.
 *
 * This function takes a number and prints its hexadecimal representation 
 * recursively. 
 * It handles numbers larger than the base length by recursively dividing by the 
 * base size and then printing the corresponding characters.
 *
 * Parameters:
 * - n: The number to be converted and printed.
 * - base: The character set used for the hexadecimal conversion.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
static int	ft_hexacon(unsigned long n, char const *base)
{
	int	i;

	i = 0;
	if (n > (ft_strlen(base) - 1))
		i = ft_hexacon(n / ft_strlen(base), base);
	i += ft_printchar(base[n % ft_strlen(base)]);
	return (i);
}

/*
 * ft_printmah - Prints the address of a pointer in hexadecimal format.
 *
 * This function is responsible for printing the pointer address as a 
 * hexadecimal 
 * string prefixed with "0x". It first casts the pointer to an unsigned long, 
 * then passes it to the helper function `ft_hexacon` for recursive printing.
 *
 * The function uses the base "0123456789abcdef" for the hexadecimal 
 * representation and ensures proper formatting.
 *
 * Parameters:
 * - format: The pointer whose address is to be printed.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
int	ft_printmah(void *format)
{
	unsigned long	n;
	const char		*base;
	int				i;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	i = ft_printstr("0x");
	if (i == -1)
		return (-1);
	i += ft_hexacon(n, base);
	return (i);
}
