/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 13:16:28 by lspohle           #+#    #+#             */
/*   Updated: 2022/12/29 19:00:57 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note_calloc
//     Prototyped as void *calloc(size_t count, size_t size)
//     -> #include <stdlib.h>
//     -> contiguously allocates enough space for count objects that are
//        size bytes of memory each
//     -> allocated memory can be used for any data type
//     -> the allocated memory is filled with bytes of value zero
//     -> returns a pointer to the allocated memory
//     -> if there is an error, it returns a NULL pointer and
//        sets errno to ENOMEM

// Note_malloc
//     Prototyped as void *malloc(size_t size)
//     -> #include <stdlib.h>
//     -> allocates size bytes of memory
//        (assigned to the heap; dynamic memory)
//     -> allocated memory can be used for any data type
//     -> returns a pointer to the allocated memory
//     -> !!! free(pointer to the allocated memory) frees allocations !!!
//        (-> checking for memory leaks)

// Note_errno
//     https://man7.org/linux/man-pages/man3/errno.3.html
//     -> ENOMEM: Not enough space/cannot allocate memory (POSIX.1-2001)

#include "libft.h"

// Allocates memory for count objects that are size bytes each
// Takes more time than just calling malloc
// Allocated memory is filled with bytes of value zero
// Returns a pointer to the allocated memory
// Returns a NULL pointer if allocation failed
void	*ft_calloc(size_t count, size_t size)
{
	void	*mem;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	mem = malloc (count * size);
	if (mem == 0)
		return (0);
	ft_bzero(mem, count * size);
	return (mem);
}
