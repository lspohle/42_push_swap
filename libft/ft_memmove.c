/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:01:09 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:14:25 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as void *memmove(void *dst, const void *src, size_t len)
//     -> #include <string.h>
//     -> copies len bytes from string src to string dst
//     -> the two strings may overlap; the copy is always done
// 	   in a non-destructive manner
//     -> returns the original value of dst

// Difference between memcpy and memmove
//     -> memcpy: copies len bytes from src to dst
//        -> if dst and src overlap, behavior is undefined
// 	      (compiler might use a buffer)
//     -> memmove: copies len bytes from src to a buffer
// 	   and moves them from the buffer to dst
//        -> if dst and src overlap, copy is always done in a
// 	      non-destructive manner

// Links
//     Difference between memcpy and memmove:
//	   https://www.youtube.com/watch?v=nFl1cNXk85s

#include "libft.h"

// Copies len bytes from string src to string dst
// Strings may overlap
// Returns the original value of dst
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = (unsigned char *) dst;
	char_src = (unsigned char *) src;
	if (dst < src && (dst != 0 || src != 0))
	{
		ft_memcpy(char_dst, char_src, len);
	}
	else if (dst != 0 || src != 0)
	{
		while (len-- != 0)
			char_dst[len] = char_src[len];
	}
	return (dst);
}

//size_t			i;
