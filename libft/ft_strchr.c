/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:23:50 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:21:40 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char *strchr(const char *s, int c)
//     -> #include <string.h>
//     -> locates the first occurrence of c (converted to a char) in the string
//        pointed to by s
//     -> the terminating null character is considered to be part of the string;
//        therefore if c is ‘\0’, the functions locate the terminating ‘\0’
//     -> returns a pointer to the located character
//     -> returns NULL if the character does not appear in the string

#include "libft.h"

// Locates the first occurrence of c in s
// The terminating null character is considered to be part of the string
// Returns a pointer to the located character
// Returns NULL if the character does not appear in the string
char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = -1;
	while (s[++i] != '\0')
		if (s[i] == (char) c)
			return (&((char *)s)[i]);
	if (s[i] == (char) c)
		return (&((char *)s)[i]);
	return (NULL);
}
