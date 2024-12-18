/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:50:00 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:09:42 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_printnbr - Prints an integer number.
 *
 * This function prints an integer, handling the edge case of `INT_MIN` directly 
 * and printing it as the string "-2147483648". If the number is negative, it 
 * prints the minus sign, then converts the positive value to a string.
 *
 * Parameters:
 * - n: The integer to be printed.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
int	ft_printnbr(int n)
{
	int	i;
	int	j;

	i = ft_nbrlen(n);
	j = 0;
	if (n == INT_MIN)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if (write(1, "-", 1) == -1)
			return (-1);
		n *= -1;
	}
	if (n >= 10)
		j = ft_printnbr(n / 10);
	if (j == -1)
		return (-1);
	if (write(1, &"0123456789"[n % 10], 1) == -1)
		return (-1);
	return (i);
}
