/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 18:10:44 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 18:20:25 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l1;
	size_t	l2;
	char	*result;
	size_t	n;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	result = malloc(sizeof(char) * (l1 + l2 + 1));
	if (!(result))
		return (NULL);
	n = 0;
	while (n < l1)
	{
		result[n] = s1[n];
		n++;
	}
	n = 0;
	while (n < l2)
	{
		result[l1 + n] = s2[n];
		n++;
	}
	result[l1 + l2] = '\0';
	return (result);
}
