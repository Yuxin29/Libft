/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:28:37 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 14:31:58 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstlast(t_list *lst);

int	main(void)
{
	t_list	*lst;
	t_list	*lst_1;
	t_list	*lst_return;

	lst = malloc(sizeof(t_list) * 1);
	lst_1 = malloc(sizeof(t_list) * 1);
	lst->content = "num_0";
	lst->next = lst_1;
	lst_1->content = "num_1";
	lst_1->next = NULL;
	lst_return = ft_lstlast(lst);
	printf("%s\n", (char *)lst_return->content);
	return (0);
}
