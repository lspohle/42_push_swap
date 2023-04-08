/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:56:42 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:18:52 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as int tolower(int c)
//     -> #include <ctype.h>
//     -> converts an upper-case letter to the corresponding lower-case letter
//     -> value of the argument must be representable
// 	   as an unsigned char or the value of EOF
//     -> if the argument is an upper-case letter, the tolower() function
// 	   returns the corresponding lower-case letter
//     -> otherwise, the argument is returned unchanged

#include "libft.h"

// Converts an upper-case letter to the corresponding lower-case letter
int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}
