/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printulo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 12:13:35 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:10:05 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_printulo - Prints an unsigned long integer number.
 *
 * This function prints an unsigned long number. It uses recursion to print each 
 * digit of the number in the base of 10. The function returns the number of 
 * characters printed, or -1 if there is an error.
 *
 * Parameters:
 * - n: The unsigned long integer to be printed.
 *
 * Returns:
 * - The number of characters printed, or -1 if an error occurs.
 */
int	ft_printulo(unsigned long n)
{
	int		i;
	char	*base;

	i = 0;
	base = "0123456789";
	if (n > (ft_strlen(base) - 1))
	{
		i = ft_printulo(n / ft_strlen(base));
		if (i == -1)
			return (-1);
	}
	i += ft_printchar(base[n % ft_strlen(base)]);
	if (i == -1)
		return (-1);
	return (i);
}
