/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:17:32 by eala-lah          #+#    #+#             */
/*   Updated: 2025/04/29 13:33:01 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_atoi - Converts a string to an integer.
 *
 * This function processes the input string by skipping leading whitespace, 
 * handling an optional '+' or '-' sign, and then converting the numeric 
 * part of the string into an integer. It continues until a non-digit character 
 * is encountered, at which point the conversion stops.
 * Note: Overflow is not explicitly checked in this function.
 *
 * Parameters:
 * - str: The string to be converted into an integer.
 *
 * Returns:
 * - The integer representation of the string.
 */
int	ft_atoi(char const *str)
{
    long long int	n;
    int				sign;
    int				dig;

    n = 0;
    sign = 1;
    while (*str && ft_isspace(*str)) // skip whitespace
        str++;
    if (*str == '-' || *str == '+') // handle sign
    {
        if (*str == '-')
            sign *= -1;
        str++;
    }
    while (*str && ft_isdigit(*str)) // process digits
    {
        dig = *str - '0';
        if (n > (INT_MAX - dig) / 10) // overflow check
        {
            if (sign == 1)
                return (INT_MAX); // or any error value you prefer
            else
                return (INT_MIN); // or any error value you prefer
        }
        n = n * 10 + dig;
        str++;
    }
    if (*str != '\0') // check if there are invalid characters
        return (0); // invalid input, return 0 or any error value
    return ((int)(n * sign)); // return the result with the correct sign
}
