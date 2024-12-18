/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:22:47 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:11:07 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 * ft_format - Handles format specifiers for the custom printf implementation.
 *
 * This function processes the format specifier and calls the appropriate 
 * helper function to print the corresponding argument. It handles different 
 * types of data, including characters (`c`), strings (`s`), integers 
 * (`d`, `i`), unsigned integers (`u`), hexadecimal numbers (`x`, `X`), and 
 * pointers (`p`). If the specifier is not supported, the function returns 
 * -1 to indicate an error.
 *
 * Parameters:
 * - args: A list of arguments passed to the printf function.
 * - format: The format specifier character that determines how the argument 
 * should be printed.
 *
 * Returns:
 * - The number of characters printed for the corresponding format, or -1 if 
 *   an unsupported format is encountered.
 */
static int	ft_format(va_list args, const char format)
{
	void	*ptr;

	if (format == 'c')
		return (ft_printchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_printstr(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_printnbr(va_arg(args, int)));
	else if (format == 'X' || format == 'x')
		return (ft_printhexa(va_arg(args, int), format));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_printmah(ptr));
		return (ft_printstr("0x0"));
	}
	else if (format == 'u')
		return (ft_printulo(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_printchar('%'));
	else
		return (-1);
}

/*
 * ft_printf - Custom printf implementation for formatted output.
 *
 * This function parses the format string `str` and prints the corresponding 
 * arguments based on format specifiers. It handles various specifiers, 
 * including characters (`c`), strings (`s`), integers (`d`, `i`), unsigned 
 * integers (`u`), hexadecimal (`x`, `X`), and pointers (`p`). The function 
 * calls the appropriate helper functions to print each type, ensuring that 
 * they are formatted correctly. If an unsupported format specifier is 
 * encountered, 
 * the function returns -1.
 *
 * Parameters:
 * - str: The format string containing specifiers for the arguments.
 *
 * Returns:
 * - The total number of characters printed, or -1 if an error occurs.
 */
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_strchr("cspdiuxX%", str[i + 1]))
		{
			length += ft_format(args, str[i + 1]);
			i++;
		}
		else
			length += ft_printchar(str[i]);
		if (length == -1)
			return (-1);
		i++;
	}
	va_end(args);
	return (length);
}
