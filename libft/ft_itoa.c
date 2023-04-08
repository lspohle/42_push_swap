/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:37:15 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 10:02:12 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char *ft_itoa(int n)
//     -> allocates (with malloc(3)) and returns a string representing the
//        integer received as an argument
//     -> negative numbers must be handled
//     -> return value: the string representing the integer passed as argument
//                      returns NULL if allocation fails
//     -> libc functions: malloc(3)

// Note_malloc
//     Prototyped as (void*) malloc(size_t size)
//     -> #include <stdlib.h>
//     -> allocates size bytes of memory (assigned to the heap; dynamic memory)
//     -> allocated memory is aligned such that it can be used for any data type
//        (including AltiVec- and SSE-related types)
//     -> returns a pointer to the allocated memory
//     -> !!! free(pointer to the allocated memory) frees allocations !!!
//     (-> checking for memory leaks)

#include "libft.h"

static int	ft_logarithm(int n)
{
	int		exponent;

	exponent = 1;
	if (n < 0)
	{
		n = -n;
		exponent++;
	}
	while (n > 9)
	{
		n = n / 10;
		exponent++;
	}
	return (exponent);
}

static int	ft_get_divisor(int index)
{
	int		divisor;

	divisor = 1;
	while (index > 1)
	{
		divisor *= 10;
		index--;
	}
	return (divisor);
}

static char	*ft_convert_to_string(int n, char *str, int len)
{
	int		divisor;
	int		i;

	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		len--;
		n = -n;
	}
	while (len > 0)
	{
		divisor = ft_get_divisor(len);
		str[i++] = n / divisor + 48;
		len--;
		n %= divisor;
	}
	str[i] = '\0';
	return (str);
}

// Allocates and returns a str representing int
// Returns NULL if allocation failed
char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_logarithm(n);
	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_convert_to_string(n, str, len);
	return (str);
}
