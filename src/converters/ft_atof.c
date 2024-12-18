/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:34 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:01:24 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atof - Converts a string to a floating point number.
 *
 * This function converts a string into a floating point number by:
 * 1. Skipping any leading whitespace.
 * 2. Handling an optional sign (positive or negative).
 * 3. Parsing digits before and after a decimal point to calculate the final 
 * value.
 * The function accounts for the optional decimal portion and adjusts the result
 * accordingly by multiplying the decimal part by progressively smaller factors.
 *
 * Parameters:
 * - str: The string to be converted into a floating point number.
 *
 * Returns:
 * - The floating point number represented by the string, with correct handling
 *   of the sign and decimal precision.
 */
double	ft_atof(const char *str)
{
	double	res;
	double	dec;
	double	sign;

	res = 0.0;
	dec = 0.1;
	sign = 1.0;
	while (ft_isspace(*str))
		str++;
	if (ft_issign(*str) && *str == '-')
		sign = -1.0;
	if (ft_issign(*str))
		str++;
	while (ft_isdigit(*str))
		res = res * 10.0 + (*str++ - '0');
	if (*str == '.')
	{
		str++;
		while (ft_isdigit(*str))
		{
			res += (*str++ - '0') * dec;
			dec *= 0.1;
		}
	}
	return (res * sign);
}
