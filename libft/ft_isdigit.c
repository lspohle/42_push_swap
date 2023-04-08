/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 13:37:38 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/16 12:10:36 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// 	Prototyped as int isdigit(int c)
// 	-> #include <ctype.h>
// 	-> tests for a decimal digit character
// 	-> regardless of locale, this includes the following characters only
// 	-> returns zero if the character tests false
// 	   returns non-zero if the character tests true

#include "libft.h"

// Tests for a decimal digit character
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
