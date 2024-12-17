/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 15:00:38 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/17 15:01:14 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atol - Converts a string to a long integer, considering potential
 * sign and overflow.
 *
 * This function mimics the behavior of the `atoi` function, but it performs
 * the conversion to a `long` type, which is capable of handling larger values
 * than a standard `int`. It also properly handles the sign and ensures that
 * integer overflows are avoided.
 *
 * Parameters:
 * - str: The string to be converted to a long integer.
 *
 * Returns:
 * - The converted long integer, ensuring proper sign and overflow handling.
 */
long	ft_atol(char const *str)
{
	long long int	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		n = n * 10 + (*str - '0');
		str++;
		if (n > INT_MAX && sign == 1)
			return (n);
		if (n > (long long)INT_MAX + 1 && sign == -1)
			return (n * sign);
	}
	return ((n * sign));
}
