/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:13:36 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:13:40 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
// 	void *memcpy(void *restrict dst, const void *restrict src, size_t n)
//     -> #include <string.h>
//     -> copies n bytes from memory area src to memory area dst
//     -> if dst and src overlap, behavior is undefined
//     -> returns the original value of dst

// Warning
//     Applications in which dst and src might overlap,
// 	one should use memmove(3) instead

// Links
//     memcpy: https://www.youtube.com/watch?v=ypG9W33LOTk

#include "libft.h"

// Copies n bytes from memory area src to memory area dst
// If dst and src overlap, behavior is undefined
// Returns the original value of dst
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_dst;
	unsigned char	*char_src;

	char_dst = (unsigned char *) dst;
	char_src = (unsigned char *) src;
	i = -1;
	while (++i != n && (dst != NULL || src != NULL))
		char_dst[i] = char_src[i];
	return (dst);
}
