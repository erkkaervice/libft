/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eala-lah <eala-lah@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 16:57:14 by eala-lah          #+#    #+#             */
/*   Updated: 2024/12/18 16:31:11 by eala-lah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * ft_words - Counts the number of words in a string separated by a delimiter.
 *
 * This function iterates through the string `s`, incrementing a counter each 
 * time a non-delimiter character is encountered, marking the beginning of a 
 * new word. It skips over delimiter characters, continuing until the end of 
 * the string. This function is crucial for determining the number of words 
 * to allocate memory for when splitting the string.
 *
 * Parameters:
 * - s: The string in which to count the words.
 * - c: The delimiter character that separates words in the string.
 *
 * Returns:
 * - The number of words in the string, delimited by the character `c`.
 */
static size_t	ft_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

/*
 * ft_wrdlen - Calculates the length of a word in a string based on a delimiter.
 *
 * This function measures the length of a word starting from the current 
 * position in the string `s`, and continuing until the delimiter character `c` 
 * or the end of the string is encountered. The function excludes the delimiter 
 * from the count, only counting the characters in the word itself.
 *
 * Parameters:
 * - s: The string where the word is located.
 * - c: The delimiter character that separates words.
 *
 * Returns:
 * - The length of the current word (characters before the delimiter).
 */
static size_t	ft_wrdlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

/*
 * ft_farray - Frees all allocated strings in an array of strings.
 *
 * This helper function is used to clean up memory in case of an error during 
 * the string splitting process. It iterates over the array of strings, freeing 
 * each individual string that was allocated by `ft_split`. Afterward, it frees 
 * the array itself.
 *
 * Parameters:
 * - i: The index up to which the strings in the array should be freed.
 * - array: The array of strings to be freed.
 */
static void	ft_farray(size_t i, char **array)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
}

/*
 * ft_saw - Builds the array of substrings for the `ft_split` function.
 *
 * This function processes the input string `s` by allocating substrings for 
 * each word, separated by the delimiter `c`. Each substring is allocated 
 * using `ft_substr`. If memory allocation fails at any point, it frees all 
 * previously allocated substrings and returns `NULL`, ensuring no memory 
 * leaks occur.
 *
 * Parameters:
 * - s: The string to be split.
 * - c: The delimiter character used to split the string.
 * - marray: The array where the substrings will be stored.
 * - words_count: The total number of words to be processed.
 *
 * Returns:
 * - A pointer to the array of substrings if successful, or `NULL` if memory 
 *   allocation fails.
 */
static char	**ft_saw(char const *s, char c, char **marray, size_t words_count)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words_count)
	{
		while (s[j] && s[j] == c)
			j++;
		marray[i] = ft_substr(s, j, ft_wrdlen(&s[j], c));
		if (!marray[i])
		{
			ft_farray(i, marray);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	marray[i] = NULL;
	return (marray);
}

/*
 * ft_split - Splits a string into an array of substrings based on a delimiter.
 *
 * This function takes a string `s` and splits it into an array of substrings, 
 * using the delimiter `c` to separate each word. The function uses helper 
 * functions to count the words, determine the length of each word, and allocate 
 * memory for the resulting array. If memory allocation fails or if the string 
 * is empty, the function returns `NULL`. The array is terminated by a `NULL` 
 * pointer.
 *
 * Parameters:
 * - s: The string to be split into substrings.
 * - c: The delimiter character used to split the string.
 *
 * Returns:
 * - A pointer to the array of substrings, or `NULL` if memory allocation 
 *   fails or the string is empty.
 */
char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**marray;

	words = ft_words(s, c);
	marray = (char **)malloc(sizeof(char *) * (words + 1));
	if (!s)
		return (NULL);
	if (!marray)
		return (NULL);
	marray = ft_saw(s, c, marray, words);
	return (marray);
}
