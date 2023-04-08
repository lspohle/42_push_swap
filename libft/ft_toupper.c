/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:58:00 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:18:32 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as int toupper(int c)
//     -> #include <ctype.h>
//     -> converts a lower-case letter to the corresponding upper-case letter
//     -> value of the argument must be representable
// 	   as an unsigned char or the value of EOF
//     -> if the argument is a lower-case letter, the toupper() function
// 	   returns the corresponding upper-case letter
//     -> otherwise, the argument is returned unchanged

#include "libft.h"

// Converts an lower-case letter to the corresponding upper-case letter
int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
