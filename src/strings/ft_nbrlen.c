/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:18:38 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:15:00 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_nbrlen - Calculates the number of digits in an integer.
 *
 * This function computes the length of the integer `nbr` when represented as a 
 * string. It handles both positive and negative integers, ensuring that the 
 * minus sign for negative numbers is counted. The function loops through each 
 * digit by dividing the number by 10 until the number becomes zero, counting 
 * each digit in the process.
 *
 * Parameters:
 * - nbr: The integer whose length is to be determined.
 *
 * Returns:
 * - The number of digits in `nbr`, including 1 for negative numbers if 
 *   applicable.
 */
size_t	ft_nbrlen(int nbr)
{
	size_t	i;

	i = 0;
	if (nbr <= 0)
		i++;
	while (nbr != 0)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}
