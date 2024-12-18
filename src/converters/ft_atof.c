/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:49:34 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:47:19 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atof - Converts a string to a floating point number.
 *
 * This function parses a string to produce a floating point number by:
 * 1. Skipping any leading whitespace.
 * 2. Handling an optional sign (positive or negative).
 * 3. Converting the string to a float by processing digits before and after 
 *    a decimal point.
 * The resulting value is returned as a floating point number, where the sign 
 * and decimal precision are properly handled.
 *
 * Parameters:
 * - str: The string to be converted into a floating point number.
 *
 * Returns:
 * - The floating point number represented by the string, accounting for any 
 *   sign and decimal precision.
 */
static double	handle_sign_and_whitespace(const char **str)
{
	double	sign;

	sign = 1.0;
	while (**str && ft_isspace(**str))
		(*str)++;
	if (ft_issign(**str))
	{
		if (**str == '-')
			sign = -1.0;
		(*str)++;
	}
	return (sign);
}

double	ft_atof(const char *str)
{
	double	result;
	double	decimal_factor;
	double	sign;

	result = 0.0;
	decimal_factor = 0.1;
	sign = handle_sign_and_whitespace(&str);
	while (ft_isdigit(*str))
	{
		result = result * 10.0 + (*str - '0');
		str++;
	}
	if (*str == '.')
	{
		str++;
		while (ft_isdigit(*str))
		{
			result += (*str - '0') * decimal_factor;
			decimal_factor *= 0.1;
			str++;
		}
	}
	result *= sign;
	return (result);
}
