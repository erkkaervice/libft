/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:17:32 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:08:44 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atoi - Converts a string to an integer.
 *
 * This function parses the input string, skipping leading whitespace characters, 
 * and optionally handles a '+' or '-' sign. It then converts the remaining 
 * characters to an integer until a non-digit character is encountered.
 * If the result overflows the range of a 32-bit signed integer, the function 
 * will return an integer result as computed by the underlying logic, though 
 * handling for overflow is not explicitly done in this function.
 *
 * Parameters:
 * - str: The string to be converted.
 *
 * Returns:
 * - The converted integer value.
 */
int	ft_atoi(char const *str)
{
	long long int	n;
	int				sign;
	long long int	dig;

	n = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		dig = *str - '0';
		n = n * 10 + sign * dig;
		str++;
	}
	return ((int)n);
}
