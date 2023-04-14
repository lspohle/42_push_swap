/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:35:33 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:21:12 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as size_t strlen(const char *s)
//     -> #include <string.h>
//     -> returns the number of characters that precede
//        the terminating NUL character
//     -> returns the length of s excluding '\0'

// Difference between an array and a string
//     -> array: stores a set of integers, doubles, floats, etc.
//               data structure
//               does not end with a null character
//     -> string: only stores characters (items of only the char data type)
//                object
//                ends with a null character

// Links
//     Difference between an array and a string:
// 	https://askanydifference.com/difference-between-array-and-string/

#include "libft.h"

// Returns the number of characters that precede the terminating NULL
size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
