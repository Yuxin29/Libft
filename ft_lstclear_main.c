/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_main.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:17:40 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 19:23:38 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

void	del(void *cont)
{
	free (cont);
}

void	ft_lstclear(t_list **lst, void (*del)(void *));

int	main(void)
{
	t_list	*lst_0;
	t_list	*lst_1;
	t_list	*lst_last;
	t_list	*lst;
	char	*s;

	s = "clear_successful";
	lst_0 = malloc(sizeof(t_list));
	lst_1 = malloc(sizeof(t_list));
	lst_last = malloc(sizeof(t_list));
	if ((!lst_last) || (!lst_1) || (!lst_0))
		return (0);
	lst_0->content = "num_0";
	lst_0->next = lst_1;
	lst_1->content = "num_1";
	lst_1->next = lst_last;
	lst_last->content = "last";
	lst_last->next = NULL;
	lst = lst_0;
	ft_lstclear(&lst, del);
	lst = NULL;
	if (!(lst))
		printf("%s\n", s);
	return (0);
}
