/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 11:25:05 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/20 11:46:25 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	ft_notbelongto_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	ft_trim_start(char const *s1, char const *set)
{
	size_t	start_index;

	start_index = 0;
	while (s1[start_index])
	{
		if ((ft_notbelongto_set(s1[start_index], set)) == 0)
			return (start_index);
		start_index++;
	}
	return (1);
}

size_t	ft_trim_end(char const *s1, char const *set)
{
	size_t	end_index;

	end_index = ft_strlen(s1);
	while (end_index > 0)
	{
		if ((ft_notbelongto_set(s1[end_index], set)) == 1)
			return (end_index);
		end_index--;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	s_index;
	size_t	e_index;
	char	*trimed;
	size_t	n;

	n = 0;
	s_index = ft_trim_start(s1, set);
	e_index = ft_trim_end(s1, set);
	len = e_index - s_index;
	trimed = malloc(sizeof(char) * (len + 1));
	if (!(trimed))
		return (NULL);
	while (n < len)
	{
		trimed[n] = s1[s_index + n];
		n++;
	}
	trimed[n] = '\0';
	return (trimed);
}
