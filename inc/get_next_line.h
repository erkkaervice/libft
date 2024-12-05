/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 17:39:52 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/05 15:03:19 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

/* Includes necessary libraries for the project.
 * - unistd.h: For system calls such as read.
 * - stdlib.h: For dynamic memory allocation and string manipulation.
 */
# include <unistd.h>
# include <stdlib.h>

/* --- Constants ---
 * Buffer size and file descriptor limits.
 * - BUFFER_SIZE: Defines the maximum number of bytes read at a time
 *   from the file.
 * - OPEN_MAX: Defines the maximum number of file descriptors supported.
 */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef OPEN_MAX
#  define OPEN_MAX 10240
# endif

/* --- Function Prototypes ---
 * Functions responsible for reading and processing lines from files.
 */
char	*ft_newstr(size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_gnljoin(char *s1, char *s2);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_cleanup(char *sto);
char	*ft_free(char **str);
char	*ft_newline(char *sto);
char	*ft_readbuf(int fd, char *sto);
char	*get_next_line(int fd);

#endif
