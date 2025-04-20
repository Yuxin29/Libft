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

size_t		ft_strlen(const char *str);

char		*ft_substr(char const *s, unsigned int start, size_t len);

size_t	ft_count_c(char const *s, char c)
{
	size_t	c_count;

	c_count = 0;
	while (*s)
	{
		if ((*s) == c)
			c_count++;
		s++;
	}
	return (c_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	size_t	num_of_output;
	size_t	output;
	size_t	x;

	len = ft_strlen(s);
	num_of_output = ft_count_c(s, c) + 1;
	output = 0;
	while (output < num_of_output)
	{
		x = 0;
		while (s[x] != c)
		{
			des_output[x] = s[x];
			x++;
		}
		return (des_output);	
		output++;
	}
}
