/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 08:28:51 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/04 12:02:39 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstclear(t_list **lst, void (*del)(void*))
//  -> lst: the address of a pointer to a node
//  -> del: the address of the function used to delete the content
//  -> deletes and frees the given node and every successor of that node,
//     using the function ’del’ and free(3)
//  -> finally, the pointer to the list must be set to NULL
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"

// Deletes and frees the given node and every successor of that node,
// using the function ’del’ and free(3)
// Finally, the pointer to the list must be set to NULL
void	ft_lstclear(t_list **lst)
{
	t_list	*tmp;

	while (*lst != NULL)
	{
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
	*lst = NULL;
}
