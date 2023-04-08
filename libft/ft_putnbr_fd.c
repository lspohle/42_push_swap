/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 10:44:27 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 11:49:35 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as void ft_putnbr_fd(int n, int fd)
//     -> outputs the integer ’n’ to the given file descriptor
//     -> external functions: write

// Links
//     -> Open: https://man7.org/linux/man-pages/man2/open.2.html
//        -> Prototyped as int open(const char *pathname, int flags)
//           #include <fcntl.h>
//     -> file desriptor is an integer that uniquely identifies an open file of
//        the process
//        -> 0 = stdin
//        -> 1 = stdout
//        -> 2 = stderr

#include "libft.h"

// Outputs the integer ’n’ to the given file descriptor
void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else
	{
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n = -n;
		}
		if (n > 9)
			ft_putnbr_fd((n / 10), fd);
		c = n % 10 + 48;
		ft_putchar_fd(c, fd);
	}
}
