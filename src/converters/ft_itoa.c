/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 17:32:46 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:16:48 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_itoa - Converts an integer to a string.
 *
 * This function converts a given integer into its string representation. 
 * It handles both positive and negative integers by first calculating the 
 * absolute value of the number. The function then determines the number 
 * of digits in the integer, allocates memory for the string, and 
 * populates it with the digits in reverse order. If the number is negative, 
 * a minus sign is placed at the start.
 *
 * Parameters:
 * - n: The integer to be converted into a string.
 *
 * Returns:
 * - A dynamically allocated string representing the integer.
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
