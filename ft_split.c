/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:24:34 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/25 17:19:27 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdlib.h>

size_t	ft_strlen(const char *str);

size_t	ft_count_total_strs(char const *s, char c)
{
	size_t	strs_count;

	if ((*s) == c)
		s++;
	strs_count = 1;
	while (*s)
	{
		if ((*s) == c)
			strs_count++;
		s++;
	}
	return (strs_count);
}

size_t	*ft_showlength_eachstr(char const *s, char c)
{
	size_t		i;
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

char	**ft_split(char const *s, char c)
{
	size_t	*lengthof_eachstr;//how long is each str, needed for malloc
	size_t	n;//count strs
	size_t	m;//count each chars
	char	**strs_of_strs;//this is the RETURN VALUE

	lengthof_eachstr = ft_showlength_eachstr(s, c);
	strs_of_strs = malloc(sizeof(char *) * (ft_count_total_strs(s, c) + 1));
	if (!(strs_of_strs))
		return (NULL);
	n = 0;
	while (*s)
		s++;
	while (*s)
	{
		strs_of_strs[n] = malloc(sizeof(char) * (lengthof_eachstr[n] + 1));
		if (!(strs_of_strs[n]))
			return (NULL);
		m = 0;
		while (*s != c)
		{
			strs_of_strs[n][m] = *s;
			m++;
			s++;
		}
		strs_of_strs[n][m] = '\0';
		while (*s == c)
			s++;
		n++;
		s++;
	}
	strs_of_strs[n] = NULL;
	return (strs_of_strs);
}
