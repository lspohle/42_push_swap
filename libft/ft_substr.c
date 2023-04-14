/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:30:29 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 17:06:31 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
//     char *ft_substr(char const *s, unsigned int start, size_t len)
//     -> allocates (with malloc(3)) and returns a substring from the string
//        given as argument
//     -> the substring begins at index start and is of size len
//     -> return value: the substring
//                      NULL if allocation fails
//     -> external functions: malloc(3)

#include "libft.h"

// Allocates and returns a substring from the string given as argument
// The substring begins at index start and is of size len
// Returns the substring
// Returns NULL if allocation fails
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	if (len == 0)
		return (NULL);
	if (start >= length)
		len = 0;
	if (start < length)
		length = length - start;
	if (len > length)
		len = length;
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = -1;
	while (++i < len && s[start] != '\0')
		sub[i] = s[start++];
	sub[i] = '\0';
	return (sub);
}
