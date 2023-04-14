/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 14:50:14 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/04 12:01:37 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as void ft_lstdelone(t_list *lst, void (*del)(void*))
//  -> lst: the node to free
//  -> del: the address of the function used to delete the content
//  -> takes as a parameter a node and frees the memory of the node’s content
//     using the function ’del’ given as a parameter and frees the node
//  -> the memory of ’next’ must not be freed
//  -> external functs: free
//  -> return: none

#include "libft.h"

// Takes a node and frees the memory of the node’s content
// using the function ’del’ and frees the node
void	ft_lstdelone(t_list *lst)
{
	free(lst);
}
