/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 10:39:07 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 12:00:21 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as char *strrchr(const char *s, int c)
//     -> #include <string.h>
//     -> identical to strchr(), except it locates the last occurrence of c

#include "libft.h"

// Locates the last occurrence of c in s
// The terminating null character is considered to be part of the string
// Returns a pointer to the located character
// Returns NULL if the character does not appear in the string
char	*ft_strrchr(const char *s, int c)
{
	char			*char_s;
	char			*tmp;
	size_t			i;

	char_s = (char *) s;
	tmp = NULL;
	i = 0;
	while (i <= ft_strlen(s))
	{
		if (char_s[i] == (char) c)
			tmp = &char_s[i];
		i++;
	}
	return (tmp);
}
