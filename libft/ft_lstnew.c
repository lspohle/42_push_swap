/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lspohle <lspohle@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 08:26:31 by lspohle           #+#    #+#             */
/*   Updated: 2023/04/06 14:16:50 by lspohle          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Note
//  Prototyped as t_list *ft_lstnew(void *content)
//  -> content: the content to create the node with
//  -> allocates (with malloc(3)) and returns a new node
//  -> member variable ’content’ is initialized with value of parameter
//     ’content’
//  -> the variable ’next’ is initialized to NULL
//  -> external functs: malloc
//  -> return: the new node

// Links
//  -> structs (video): https://www.youtube.com/watch?v=dqa0KMSMx2w
//  -> linked lists (video): https://www.youtube.com/watch?v=VOpjAHCee7c
//  -> linked lists: https://www.learn-c.org/en/Linked_lists

#include "libft.h"

// Allocates and returns a new node
t_list	*ft_lstnew(int num)
{
	t_list	*new;

	new = (t_list *) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->num = num;
	new->next = NULL;
	return (new);
}
