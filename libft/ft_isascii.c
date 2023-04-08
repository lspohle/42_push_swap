/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:20:27 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:10:19 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as int isascii(int c)
// 	-> #include <ctype.h>
// 	-> tests for an ASCII character,
// 	   which is any character between 0 and octal 0177 inclusive
// 	(-> returns zero if the character tests false
// 	   returns non-zero if the character tests true)

#include "libft.h"

// Tests for an ASCII character
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}
