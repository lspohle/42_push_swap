/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 11:57:24 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/21 15:23:01 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as
//     void ft_striteri(char *s, void (*f)(unsigned int, char *))
//     -> applies the function f to each character of the string
//        passed as argument, and passing its index as first argument
//     -> each character is passed by address to f to be modified if necessary
//     -> return value: none
//     -> libc functions: none

#include "libft.h"

// Applies 'f' to each character of the 's'
// Passing its index as first argument
// Each character is passed by address to 'f' to be modified if necessary
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	while (s[++i])
		f(i, s + i);
}
