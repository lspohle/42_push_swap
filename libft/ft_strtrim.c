/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 08:25:06 by lspohle           #+#    #+#             */
/*   Updated: 2023/03/22 13:45:52 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char* ft_strtrim(char const *s1, char const *set)
//     -> allocates (with malloc(3)) and returns a copy of the string given as
//        argument without the characters specified in set in the beginning or
//		  the finish
//     -> return value: “fresh” trimmed string or a copy of s
//                      returns NULL if allocation fails
//     -> libc functions: malloc(3)

#include "libft.h"

static int	ft_get_start(const char *s1)
{
	int		start;

	start = 0;
	while (s1[start] == 34 || s1[start] == 39)
		start++;
	return (start);
}

static int	ft_get_finish(const char *s1)
{
	int		finish;

	finish = ft_strlen(s1) - 1;
	while (s1[finish] == 34 || s1[finish] == 39)
		finish--;
	finish++;
	return (finish);
}

// Allocates and returns a copy of 's' without characters specified in set 
// (in the beginning or the finish)
// Return values “fresh” trimmed string or a copy of s
// Returns NULL if allocation fails
char	*ft_strtrim(const char *s1)
{
	char	*output;
	int		start;
	int		len;
	int		i;

	if (*s1 == 0)
		return (ft_strdup(""));
	start = ft_get_start(s1);
	len = ft_get_finish(s1) - start;
	if (len <= 0)
		return (ft_strdup(""));
	output = (char *) malloc ((len + 1) * sizeof(char));
	if (!output)
		return (0);
	i = 0;
	while (i < len)
		output[i++] = s1[start++];
	output[i] = '\0';
	return (output);
}
