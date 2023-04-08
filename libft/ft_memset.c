/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:36:35 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:14:00 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as void *memset(void *b, int c, size_t len)
// 	-> #include <string.h>
// 	-> writes len bytes of value c
//	   (converted to an unsigned char) to the string b
// 	-> returns its first argument

#include "libft.h"

// Writes len bytes of value c (converted to an unsigned char) to b
// Returns its first argument
void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*char_b;

	char_b = (unsigned char *) b;
	i = -1;
	while (++i != len)
		char_b[i] = c;
	return (b);
}
