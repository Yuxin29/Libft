/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 20:03:20 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 20:10:35 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	f(void *cont);

void	ft_lstiter(t_list *lst, void (*f)(void *));

int	main(void)
{
	t_list	*node_1;
	t_list	*node_2;
	t_list	*nodes;

	node_1 = malloc(sizeof(t_list));
	node_2 = malloc(sizeof(t_list));
	if ((!node_1) || (!node_2))
	{
		printf("%s\n", "Error");
		return (0);
	}
	node_1->content = malloc(sizeof(char) * 7);
	node_2->content = malloc(sizeof(char) * 7);
	if ((!node_1->content) || (!node_2->content))
	{
		printf("%s\n", "Error");
		return (0);
	}
	strcpy((char *)node_1->content, "node_1");
	node_1->next = node_2;
	strcpy((char *)node_2->content, "node_2");
	node_2->next = NULL;
	nodes = node_1;
	ft_lstiter(nodes, f);
	printf("%s\n", (char *)node_2->content);
	return (0);
}
