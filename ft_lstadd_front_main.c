/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:25:56 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 13:26:45 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new);

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
