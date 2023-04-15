/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 18:07:44 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:08:19 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as void bzero(void *s, size_t n)
// 	-> #include <string.h>
// 	-> writes n zeroed bytes to the string s
// 	-> if n is zero, bzero() does nothing

#include "libft.h"

// Writes n zeroed bytes to the string s
// If n is zero, bzero() does nothing
void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		((char *)s)[n] = '\0';
}
