/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:35:01 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:10:51 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_printhexa - Prints a number in hexadecimal format.
 *
 * This function prints the given unsigned integer `n` in either lowercase 
 * or uppercase hexadecimal format based on the `format` character ('x' for 
 * lowercase and 'X' for uppercase). It recursively divides the number by the 
 * base (16) to print the hexadecimal digits. The function handles numbers 
 * larger than the base by printing the higher digits first, followed by the 
 * current digit. It returns the number of characters printed, or -1 if there 
 * is an error during printing.
 *
 * Parameters:
 * - n: The unsigned integer to be printed in hexadecimal format.
 * - format: The format character indicating whether to use lowercase ('x') 
 *           or uppercase ('X') for the hexadecimal digits.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
int	ft_printhexa(unsigned long n, char format)
{
	char			*base;
	unsigned int	ui;
	int				i;
	unsigned int	bal;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	ui = (unsigned int)n;
	bal = ft_strlen(base);
	if (ui > (bal - 1))
	{
		i = ft_printhexa(ui / bal, format);
		if (i == -1)
			return (-1);
	}
	i += ft_printchar(base[ui % bal]);
	if (i == -1)
		return (-1);
	return (i);
}
