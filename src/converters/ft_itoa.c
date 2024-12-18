/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:32:46 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:09:18 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_itoa - Converts an integer to a string.
 *
 * This function takes an integer and converts it into a dynamically allocated 
 * string representation of that number. It handles both positive and negative 
 * integers, ensuring the correct placement of the minus sign for negative numbers. 
 * The function first calculates the absolute value of the integer and determines 
 * the string length based on the number of digits. The digits are then placed into 
 * the string in reverse order, and the minus sign is added if the number is negative.
 *
 * Parameters:
 * - n: The integer to be converted.
 *
 * Returns:
 * - A string representing the integer.
 * - NULL if memory allocation fails.
 */
char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*str;

	nbr = ft_abs(n);
	sign = 0;
	len = ft_nbrlen(n);
	str = ft_newstr(len);
	if (!str)
		return (NULL);
	if (n < 0)
		sign = 1;
	str[len] = '\0';
	while (len-- > sign)
	{
		str[len] = '0' + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
