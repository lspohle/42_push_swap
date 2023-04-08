/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:43:47 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:13:09 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as int memcmp(const void *s1, const void *s2, size_t n)
//     -> #include <string.h>
//     -> compares byte string s1 against byte string s2
//		  (both strings are assumed to be n bytes long)
//     -> if s1 == s2, return (0) (zero-length strings are always identical)
//        otherwise returns the difference between the first two differing
//        bytes (treated as unsigned char values)
//        if s1 > s2, return (s1[i] - s2[i]) [return greater than 0]

// Links
//     memcmp: https://www.youtube.com/watch?v=ypG9W33LOTk

#include "libft.h"

// Compares s1 against s2 (both strings are assumed to be n bytes long)
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*char_s1;
	unsigned char	*char_s2;
	size_t			i;

	char_s1 = (unsigned char *) s1;
	char_s2 = (unsigned char *) s2;
	i = 0;
	while (i != n && char_s1[i] == char_s2[i])
		i++;
	if (i == n)
		return (0);
	return (char_s1[i] - char_s2[i]);
}
