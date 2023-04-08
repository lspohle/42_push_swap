/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 07:04:55 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:23:40 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// Prototyped as char *ft_strmapi(const char *s, char (*f)(unsigned int, char))
// -> s: the string on which to iterate
// -> f: the function to apply to each character
// -> applies the function ’f’ to each character of the string ’s’, and passing
//    its index as first argument to create a new string (with malloc(3))
//    resulting from successive applications of ’f’
// -> return: the string created from the successive applications of ’f’
//            NULL if the allocation fails
// -> external functs: malloc

#include "libft.h"

// Applies ’f’ to each character of ’s’
// Passing its index as first argument to create new string
// Returns the string created from the successive applications of ’f’
// Returns NULL if the allocation fails
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*result;
	size_t			len;
	unsigned int	i;

	len = ft_strlen(s);
	result = (char *) malloc ((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	i = -1;
	while (s[++i] != 0)
		result[i] = f(i, (char) s[i]);
	result[i] = '\0';
	return (result);
}
