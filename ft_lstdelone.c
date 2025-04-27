/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:31:33 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 16:44:14 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*del(void *cont)
{
	free (cont);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
}	

/*
Parameters 
	lst: The node to free.
	del: The address of the function used to delete the content.
Description 
Takes a node as parameter and frees its content using the function ’del’. 
Free the node itself but does NOT free the next node.
*/
