/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:45:27 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 16:52:38 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *));

int	main(void)
{
	int	i;
	t_list	*test;

	i = 0;
	test = malloc(sizeof(t_list) * 1);
	test->content = "to_be_freed";
	ft_lstdelone(test, void (*del)(void *))
	if (!(test->content))
	{
		printf("%i\n", i);
		return (0);
	}
	return (0);
}
