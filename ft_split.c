/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 13:24:34 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/20 13:47:22 by yuwu             ###   ########.fr       */
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

char	*ft_showlength_eachstr(char const *s, char c)
{
	size_t	num_strs;
	char	*str_leng;	//show length of each str in char
	int	i;

	i = 0;
	num_strs = ft_count_total_strs(s, c);
	str_leng = malloc(sizeof(char) * (num_strs + 1));
	if (!(str_leng))
		return (NULL);
	str_leng[i] = '0';
	while (*s)
	{
		if (*s != c)
			str_leng[i]++;
		if (*s == c)
		{
			i++;
			str_leng[i] = '0';
		}
		s++;
	}
	//len_strs[i] = '\0';  //why this can not be here
	return (str_leng);
}

char	**ft_split(char const *s, char c)
{
	char	*lengthof_eachstr; //how length of each strs in char, needed for malloc
	size_t	n;		//count strs
	size_t	m;		//count each chars
	size_t	t;		//count total chars
	char	**strs_of_strs;  //this is the returning values

	lengthof_eachstr = ft_showlength_eachstr(s, c);
	n = 0;
	t = 0;
	//num_of_strs = ft_count_total_strs(s, c);
	while (t < ft_strlen(s))
	{
		strs_of_strs[n] = malloc(sizeof(char) * (lengthof_eachstr[n] - '0'));
		m = 0;  //for each str, the char counts start from zero
		while (s[t] != c)
		{
			strs_of_strs[n][m] = s[t];
			m++;
			t++;  //t for general char counts incredent every time
		}
		strs_of_strs[n][m] = '\0';
		n++;
		t++;
	}
	return (strs_of_strs);
}
