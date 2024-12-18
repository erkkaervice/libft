/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:33:52 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 14:44:35 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
 * ft_gnljoin - Concatenates two strings and returns the result.
 *
 * This function handles the concatenation of two strings, `s1` and `s2`. If 
 * `s1` is NULL, it initializes it as an empty string. It dynamically allocates 
 * enough memory to store the combined strings and appends `s2` to `s1`. The 
 * resulting string is returned, and `s1` is freed in the process.
 *
 * Parameters:
 * - s1: The first string to concatenate (can be NULL).
 * - s2: The second string to concatenate.
 *
 * Returns:
 * - A new string containing the concatenation of `s1` and `s2`.
 * - NULL if memory allocation fails.
 */
char	*ft_gnljoin(char *s1, char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(sizeof(char) + 1);
		if (!s1)
			return (0);
		s1[0] = 0;
	}
	str = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (ft_free(&s1));
	i = -1;
	while (s1[++i])
		str[i] = s1[i];
	j = -1;
	while (s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	free(s1);
	return (str);
}

/*
 * ft_cleanup - Cleans up the static string buffer by removing the processed 
 * line and returning the remaining part.
 *
 * This function checks if a newline character is present in the given buffer 
 * (`sto`). If a newline is found, the buffer is truncated to remove the 
 * processed line, leaving only the remainder of the buffer. If no newline 
 * is found, the entire buffer is freed. The function returns the remaining 
 * portion of the string or NULL if the buffer is empty after cleanup.
 *
 * Parameters:
 * - sto: The static buffer containing the current data.
 *
 * Returns:
 * - A new string with the remainder of the buffer after the processed line 
 *   has been removed.
 * - NULL if the cleanup fails.
 */
char	*ft_cleanup(char *sto)
{
	char	*new;
	char	*ptr;
	int		len;

	ptr = ft_strchr(sto, '\n');
	if (!ptr)
	{
		new = NULL;
		return (ft_free(&sto));
	}
	else
		len = (ptr - sto) + 1;
	if (!sto[len])
		return (ft_free(&sto));
	new = ft_substr(sto, len, ft_strlen(sto) - len);
	ft_free(&sto);
	if (!new)
		return (NULL);
	return (new);
}

/*
 * ft_newline - Extracts the line up to the newline character.
 *
 * This function takes the static buffer (`sto`) and extracts the portion 
 * of the string up to and including the first newline character. It returns 
 * the extracted line as a new string. If no newline is found, it returns 
 * NULL.
 *
 * Parameters:
 * - sto: The static buffer containing the current data.
 *
 * Returns:
 * - A new string containing the line up to the first newline character.
 * - NULL if the line cannot be extracted.
 */
char	*ft_newline(char *sto)
{
	char	*line;
	char	*ptr;
	int		len;

	ptr = ft_strchr(sto, '\n');
	len = (ptr - sto) + 1;
	line = ft_substr(sto, 0, len);
	if (!line)
		return (NULL);
	return (line);
}

/*
 * ft_readbuf - Reads the buffer from the file descriptor and appends it 
 * to the static buffer.
 *
 * This function reads data from the file descriptor `fd` into a temporary 
 * buffer `buf`. It continues reading until a newline character is found 
 * or the end of the file is reached. The data read is appended to the 
 * static buffer (`sto`), and the function returns the updated buffer.
 * If an error occurs during reading, the buffer is freed and NULL is 
 * returned.
 *
 * Parameters:
 * - fd: The file descriptor to read from.
 * - sto: The static buffer to store the accumulated data.
 *
 * Returns:
 * - The updated static buffer containing the read data.
 * - NULL if an error occurs during reading.
 */
char	*ft_readbuf(int fd, char *sto)
{
	int		i;
	char	*buf;

	i = 1;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (ft_free(&sto));
	buf[0] = '\0';
	while (i > 0 && !ft_strchr(buf, '\n'))
	{
		i = read (fd, buf, BUFFER_SIZE);
		if (i > 0)
		{
			buf[i] = '\0';
			sto = ft_gnljoin(sto, buf);
		}
	}
	free(buf);
	if (i == -1)
		return (ft_free(&sto));
	return (sto);
}

/*
 * get_next_line - Reads a line from the given file descriptor.
 *
 * This function reads a line from the file descriptor `fd` and returns it 
 * as a string. The function uses a static buffer to accumulate data between 
 * function calls. When a newline character is found, the function returns 
 * the line up to the newline and cleans up the buffer to prepare for the 
 * next line. If the file descriptor is invalid or there is an error, it 
 * returns NULL.
 *
 * Parameters:
 * - fd: The file descriptor from which to read the line.
 *
 * Returns:
 * - A string containing the next line from the file.
 * - NULL if there is an error or if the end of the file is reached.
 */
char	*get_next_line(int fd)
{
	static char	*sto[OPEN_MAX];
	char		*line;

	if (fd < 0)
		return (NULL);
	if ((sto[fd] && !ft_strchr(sto[fd], '\n')) || !sto[fd])
		sto[fd] = ft_readbuf (fd, sto[fd]);
	if (!sto[fd])
		return (NULL);
	line = ft_newline(sto[fd]);
	if (!line)
		return (ft_free(&sto[fd]));
	sto[fd] = ft_cleanup(sto[fd]);
	return (line);
}
