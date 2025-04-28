/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 17:58:56 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/28 18:01:34 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

void	*f_changeto_emptied(void *cont)
{
	char	*str;

	str = malloc(sizeof(char) * 8);
	str = "emptied";
	reurn (str);
}

void	del(void *cont)
{	
	free(cont);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

int	main(void)
{
	return (0);
}
