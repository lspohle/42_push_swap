/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:49:58 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:58:11 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as void *memchr(const void *s, int c, size_t n)
//     -> #include <string.h>
//     -> locates the first occurrence of c (converted to an unsigned char)
//        in string s
//     -> returns a pointer to the byte located
//     -> returns NULL if no such byte exists within n bytes

// Links
//     memchr: https://www.youtube.com/watch?v=ypG9W33LOTk

#include "libft.h"

// Locates first occurrence of c (converted to an unsigned char) in s
// Returns a pointer to the byte located
// Returns NULL if no such byte exists within n bytes
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*char_s;
	unsigned char	char_c;
	size_t			i;

	char_s = (unsigned char *) s;
	char_c = (unsigned char) c;
	i = 0;
	while (i != n)
	{
		if (char_s[i] == char_c)
			return (&char_s[i]);
		i++;
	}
	return (NULL);
}
