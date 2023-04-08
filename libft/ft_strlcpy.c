/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:42:29 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 11:56:10 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
// size_t strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
//     -> #include <string.h>
//     -> copies strings with the same input parameters
//        and output result as snprintf(3)
//     -> safer, more consistent, and less error prone replacements
//        for the easily misused functions strncpy(3) and strncat(3)
//     -> takes the full size of the destination buffer and guarantee
//        NUL-termination if there is room
//     -> copies up to dstsize - 1 characters from the string src to dst,
//        NUL-terminating the result if dstsize is not 0
//     -> if the src and dst strings overlap, the behavior is undefined
//     -> returns the total length of the string they tried to create
//        (len of src)
//     -> if the return value is >= dstsize, the output string has been
//        truncated

#include "libft.h"

// Copies up to dstsize - 1 characters from 'src' to 'dst',
// Takes full size of dst buffer and guarantee NULL-termination if room
// Returns len of src
// If the src and dst strings overlap, the behavior is undefined
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (dstsize != 0 && i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}
