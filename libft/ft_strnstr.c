/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 11:51:23 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 18:58:44 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
//     char *strnstr(const char *haystack, const char *needle, size_t len)
//     -> #include <string.h>
//     -> locates the first occurrence of the null-terminated string needle in
//        the string haystack, where not more than len characters are searched
//     -> since the strnstr() function is a FreeBSD specific API, it should
//        only be used when portability is not a concern
//     -> if s2 is an empty string, s1 is returned;
//        if s2 occurs nowhere in s1, NULL is returned;
//        otherwise a pointer to the first character of the first occurrence
//        of s2 is returned

#include "libft.h"

// Locates first occurrence of null-terminated 'needle' in 'haystack'
// Not more than len characters are searched
// If s2 is an empty string, s1 is returned;
// If s2 occurs nowhere in s1, NULL is returned;
// Pointer to the first character of the first occurrence of s2 is returned
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	haystack_len;
	size_t	needle_len;

	haystack_len = ft_strlen(haystack);
	needle_len = ft_strlen(needle);
	if (!*needle)
		return ((char *) haystack);
	while (len >= needle_len && haystack_len >= needle_len)
	{
		if (!ft_strncmp(haystack, needle, needle_len))
			return ((char *) haystack);
		len--;
		haystack_len--;
		haystack++;
	}
	return (0);
}
