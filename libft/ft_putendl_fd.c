/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 12:06:08 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/19 13:04:45 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//     Prototyped as void ft_putendl_fd(char *s, int fd)
//     -> outputs the string ’s’ to the given file descriptor followed by '\n'
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

// Outputs the string ’s’ to the given file descriptor followed by '\n'
void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = -1;
	while (s[++i])
		write(fd, &s[i], 1);
	write(fd, "\n", 1);
}
