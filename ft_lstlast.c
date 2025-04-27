/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:25:34 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 14:28:22 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*return_v;

	return_v = malloc(sizeof(t_list) * 1);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
