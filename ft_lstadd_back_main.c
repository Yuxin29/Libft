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
#include <stdlib.h>

void	ft_lstadd_back(t_list **lst, t_list *new);

int	main(void)
{
	t_list	*src;
	t_list	**dst;

	src = malloc(sizeof(t_list) * 1);
	dst = malloc(sizeof(t_list) * 1);
	src->content = "test";
	src->next = NULL;
	ft_lstadd_front(dst, src);
	printf("%s\n", (char *)*dst->content);
	return (0);
}
