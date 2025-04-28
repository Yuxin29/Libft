/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:24:34 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/26 16:17:48 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	ft_count_total_strs(char const *s, char c)
{
	size_t	strs_count;

	while ((*s) == c)
		s++;
	strs_count = 1;
	while (*s)
	{
		if ((*s) == c)
			strs_count++;
		s++;
	}
	s--;
	while (*s == c)
	{
		strs_count--;
		s--;
	}
	return (strs_count);
}

size_t	*ft_showlength_eachstr(char const *s, char c)
{
	size_t	i;
	size_t	num_strs;
	size_t	*str_leng;

	i = 0;
	num_strs = ft_count_total_strs(s, c);
	str_leng = malloc(sizeof(size_t) * (num_strs));
	if (!(str_leng))
		return (NULL);
	while (i < num_strs)
	{
		str_leng[i] = 0;
		i++;
	}
	i = 0;
	while ((*s) == c)
		s++;
	while (*s)
	{
		if (*s != c)
			str_leng[i] += 1;
		else if (i < num_strs - 1)
			i++;
		s++;
	}
	return (str_leng);
}

char	**ft_mem_allocate(char const *s, char c)
{
	size_t	*lengthof_eachstr;
	size_t	n;
	char	**strs_of_strs_mem;

	n = 0;
	lengthof_eachstr = ft_showlength_eachstr(s, c);
	strs_of_strs_mem = malloc(sizeof(char *) * (ft_count_total_strs(s, c) + 1));
	if (!(strs_of_strs_mem))
		return (NULL);
	while (n < ft_count_total_strs(s, c))
	{
		strs_of_strs_mem[n] = malloc(sizeof(char) * (lengthof_eachstr[n] + 1));
		if (!(strs_of_strs_mem[n]))
		{
			while (n > 0)
			{
				n--;
				free (strs_of_strs_mem[n]);
			}
			return (NULL);
		}
		n++;
	}
	strs_of_strs_mem[n] = NULL;
	return (strs_of_strs_mem);
}

char	**ft_split(char const *s, char c)
{
	size_t	n;
	size_t	m;
	size_t	num_of_subs;
	char	**strs_of_strs;

	strs_of_strs = ft_mem_allocate(s, c);
	num_of_subs = ft_count_total_strs(s, c);
	n = 0;
	m = 0;
	while (*s == c)
		s++;
	while (*s)
	{
		if (*s != c)
		{
			strs_of_strs[n][m] = *s;
			m++;
		}
		else if (n < num_of_subs - 1)
		{
			strs_of_strs[n][m] = '\0';
			n++;
			m = 0;
		}
		s++;
	}
	strs_of_strs[n + 1] = NULL;
	return (strs_of_strs);
}
