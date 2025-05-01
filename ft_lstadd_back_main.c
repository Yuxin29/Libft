/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_main.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 15:04:17 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 15:07:40 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new);

int	main(void)
{
	t_list	*lst_0;
	t_list	*lst_1;
	t_list	*lst_new;
	t_list	*lst;

	lst_0 = malloc(sizeof(t_list) * 1);
	if (!lst_0)
		return (0);
	lst_1 = malloc(sizeof(t_list) * 1);
	if (!lst_1)
		return (0);
	lst_new = malloc(sizeof(t_list) * 1);
	if (!lst_new)
		return (0);
	lst_0->content = "num_0";
	lst_0->next = lst_1;
	lst_1->content = "num_1";
	lst_1->next = NULL;
	lst = lst_0;
	lst_new->content = "new";
	lst_new->next = NULL;
	ft_lstadd_back(&lst, lst_new);
	printf("%s\n", (char *)lst_1->next->content);
	return (0);
}
