/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:06:08 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/20 13:52:52 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as void ft_putchar_fd(char c, int fd)
//     -> outputs the character ’c’ to the given file descriptor
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

// Outputs the character ’c’ to the given file descriptor
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
