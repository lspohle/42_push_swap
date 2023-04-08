/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:13:29 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:11:00 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as int isprint(int c)
// 	-> #include <ctype.h>
// 	-> tests for any character for any printing character, including space (` ')
// 	-> the value of the argument must be representable as an unsigned
// 	   char or the value of EOF
// 	-> returns zero if the character tests false
// 	   returns non-zero if the character tests true

#include "libft.h"

// Tests for any character for any printing character, including space (` ')
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
