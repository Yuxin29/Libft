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

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	del(void *cont)
{
	free (cont);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *));

int	main(void)
{
	char	*s;
	t_list	*test;

	s = "freed_successful";
	test = malloc(sizeof(t_list) * 1);
	if (!(test))
		return (0);
	test->content = malloc(sizeof(char) * 12);
	if (!(test->content))
		return (0);
	test->next = malloc(sizeof(t_list) * 1);
	if (!(test->next))
		return (0);
	ft_strcpy(test->content, "to_be_freed");
	test->next = NULL;
	ft_lstdelone(test, del);
	test = NULL;
	if (!(test))
	{
		printf("%s\n", s);
		return (0);
	}
	return (0);
}
