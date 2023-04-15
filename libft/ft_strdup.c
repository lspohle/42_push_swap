/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 07:29:01 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/19 07:29:02 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note_strdup
//     Prototyped as char *strdup(const char *s1)
//     -> #include <string.h>
//     -> function allocates sufficient memory for a copy of the string s1
//     -> does the copy
//     -> returns a pointer to it
//     -> returns NULL if insufficient memory is available,
//        and errno is set to ENOMEM // Note_errno
//     -> caller has to use the pointer as an argument to free() the on the
//        heap allocated memory

// Note_malloc
//     Prototyped as (void*) malloc(size_t size)
//     -> #include <stdlib.h>
//     -> allocates size bytes of memory (assigned to the heap; dynamic memory)
//     -> allocated memory can be used for any data type
//     -> returns a pointer to the allocated memory
//     -> if there is an error, it returns a NULL pointer and
//        sets errno to ENOMEM
//     -> !!! free(pointer to the allocated memory) frees allocations !!!
//     (-> checking for memory leaks)

// Note_errno
//     https://man7.org/linux/man-pages/man3/errno.3.html
//     -> ENOMEM: Not enough space/cannot allocate memory (POSIX.1-2001)

#include "libft.h"

// Function allocates sufficient memory for a copy of s1, does the copy
// Returns a pointer to it
// Returns NULL if insufficient memory is available
char	*ft_strdup(const char *src)
{
	int		i;
	char	*copy;

	copy = (char *) malloc((ft_strlen(src) + 1) * sizeof(char));
	if (!copy)
		return (0);
	i = -1;
	while (src[++i])
		copy[i] = src[i];
	copy[i] = '\0';
	return (copy);
}
