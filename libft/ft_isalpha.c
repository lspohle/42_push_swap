/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:37:15 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 11:54:32 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as int isalpha(int c)
// 	-> #include <ctype.h>
// 	-> tests for any character for which isupper(3) or islower(3) is true
// 	-> the value of the argument must be representable as an unsigned
// 	   char or the value of EOF
// 	-> returns zero if the character tests false
// 	   returns non-zero if the character tests true

#include "libft.h"

// Tests for any character for which isupper(3) or islower(3) is true
int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
