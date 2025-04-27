/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:33:26 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 20:46:22 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

void	*f(void *)
{
	xxx
}

void	*del(void *)
{
	vvv
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*temp;

	temp = lst;
	new_lst = malloc(sizeof(t_list));
	if (!(new_lst) || (!lst) || (!f) || (!del))
		return (NULL);
	while (temp)
	{
		new_lst->content = f((char *)temp->content);
		new_lst->next = temp->next;
		temp = temp->next;
		i++;
	}
	return (new_lst);
}
