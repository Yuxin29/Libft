/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:02:33 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/27 13:05:56 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

t_list	*ft_lstnew(void *content);

int	main(void)
{
	t_list	*result;

	result = ft_lstnew("test");
	printf("%s\n", (char *)result->content);
	return (0);
}
