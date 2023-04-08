/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:01:48 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 13:54:37 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// Prototyped as
// size_t strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
// -> #include <string.h>
// -> concatenates strings with the same input parameters and output result
//    as snprintf(3)
// -> safer, more consistent, and less error prone replacements for the
//    easily misused function strncat(3)
// -> takes the full size of the destination buffer and guarantee
//    NULL-termination if there is room (note that room for the NUL should
//    be included in dstsize
// -> returns the total length of the string they tried to create
//    (the initial length of dst plus the length of src)
// -> appends string src to the end of dst
// -> it appends at most dstsize - strlen(dst) - 1 characters
// -> NULL-termination, unless dstsize is 0 or the original dst string was
//    longer than dstsize
// -> if the src and dst strings overlap, the behavior is undefined
// -> if the return value is >= dstsize, the output string has been truncated

#include "libft.h"

// Concatenates 'dst' and 'src'
// Takes full size of dst buffer and guarantee NULL-termination if room
// Returns the initial length of dst plus the length of src
// If the src and dst strings overlap, the behavior is undefined
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = -1;
	if (src != NULL)
	{
		while (src[++i] != '\0' && dst_len + i + 1 < dstsize)
			dst[dst_len + i] = src[i];
		dst[dst_len + i] = '\0';
	}
	if (dstsize < dst_len)
		return (src_len + dstsize);
	return (dst_len + src_len);
}
