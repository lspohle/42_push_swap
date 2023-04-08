/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:42:19 by lspohle           #+#    #+#             */
/*   Updated: 2023/03/29 01:34:24 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
// 	Prototyped as int isalnum(int c)
// 	-> #include <ctype.h>
// 	-> tests for any character for which isalpha(3) or isdigit(3) is true
// 	-> the value of the argument must be representable as an unsigned
// 	   char or the value of EOF
// 	-> returns zero if the character tests false
// 	   returns non-zero if the character tests true

#include "libft.h"

// Tests for any character for which isalpha(3) or isdigit(3) is true
int	ft_isalnum(int c)
{
	if (ft_isalpha(c) == 1 || ft_isdigit(c) == 1)
		return (1);
	else
		return (0);
}
