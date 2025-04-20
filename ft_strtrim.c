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

size_t		ft_strlen(const char *str);

const char	*ft_strstr(const char *big, const char *little)
{
	size_t	i;

	if (!(*little))
		return (big);
	while (*big)
	{
		if (*little == *big)
		{
			i = 0;
			while ((little[i]) && (little[i] == big[i]))
				i++;
			if (!(little[i]))
				return (big);
		}
		big++;
	}
	return (NULL);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	total_len;
	size_t	set_len;
	char	*trimed_extra;
	char	*trimed;
	size_t	n;
	size_t	m;

	n = 0;
	m = 0;
	total_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	trimed_extra = malloc(sizeof(char) * (total_len + 1));
	while (n < total_len)
	{
		if (&s1[n] == ft_strstr(&s1[n], set))
			m += set_len;
		trimed_extra[n] = s1[m];
		n++;
		m++;
	}
	trimed = malloc(sizeof(char) * (n + 1));
	trimed = trimed_extra;
	trimed[n] = '\0';
	return (trimed);
}
