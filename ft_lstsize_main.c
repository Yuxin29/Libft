/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:46:40 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 13:56:52 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst);

int	main(void)
{
	t_list	*lst_0;
	int	n;

	lst_0 = malloc(sizeof(t_list) * 1);
	lst_0->content = "num_0";
	lst_0->next = *next;
	next = *lst_1;
	lst_1 =  malloc(sizeof(t_list) * 1);
	lst_1->content = "num_1";
    	lst_1->next = NULL;
	n = ft_lstsize(lst_0);
	printf("%i\n", n);
	return (0);
}
