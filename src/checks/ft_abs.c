/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:51:56 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:04:55 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ft_abs - Computes the absolute value of an integer.
 *
 * This function checks if the input integer is negative. If it is, the 
 * function returns its positive equivalent by negating the value. If the 
 * input is non-negative, it simply returns the input as is.
 *
 * The function is particularly useful for mathematical operations where 
 * only non-negative values are required.
 *
 * Parameters:
 * - n: The integer for which the absolute value is to be computed.
 *
 * Returns:
 * - The absolute value of the input integer.
 */
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
