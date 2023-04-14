/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 09:49:39 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/04 14:20:21 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as int atoi(const char *str)
//     -> #include <stdlib.h>
//     -> converts the initial portion of str to
//        int representation
//     -> uses the current locale (!= atoi_l())
//     -> returns the converted int (if no valid conversion could be performed,
//        it returns zero)

// Warning!
//     Recommended to use strtol() instead of atoi()

#include "libft.h"

// Converts str to int representation
// Returns converted int
// Returns zero if no valid conversion could be performed
long	ft_atol(const char *str)
{
	int		i;
	long	sign;
	long	output;

	i = 0;
	sign = 1;
	output = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		output = output * 10 + (str[i++] - '0');
	return (output * sign);
}
