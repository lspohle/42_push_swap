/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 17:06:55 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/12 16:08:59 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char **ft_split(char const *s, char c)
//     -> allocates (with malloc(3)) returns an array of strings obtained by
//        splitting ’s’ using the character ’c’ as a delimiter
//     -> the array must end with a NULL pointer
//     -> return: array of new strings resulting from the split
//                NULL if allocation fails
//     -> external functions: malloc(3), free

#include "libft.h"

static int	ft_count_strings(const char *s, char c)
{
	int	i;
	int	counter;

	i = -1;
	counter = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			counter++;
			while (s[i] != c && s[i] != '\0')
				i++;
			if (s[i] == '\0')
				break ;
		}
	}
	return (counter);
}

static char	**ft_split_string(char **result, const char *s, char c)
{
	unsigned int	i;
	unsigned int	start;
	unsigned int	j;

	i = -1;
	j = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			result[j] = ft_substr(s, start, i - start);
			if (!result[j++])
			{
				free(result);
				return (NULL);
			}
			if (s[i] == '\0')
				break ;
		}
	}
	result[j] = NULL;
	return (result);
}

// Allocates and returns an array of strings obtained by splitting ’s’ using 
// the character ’c’ as a delimiter
// The array must end with a NULL pointer
// Returns array of new strings resulting from the split
// Returns NULL if allocation fails
char	**ft_split(const char *s, char c)
{
	char	**result;

	result = (char **)malloc ((ft_count_strings(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	if (ft_split_string(result, s, c) == NULL)
		return (NULL);
	return (result);
}
