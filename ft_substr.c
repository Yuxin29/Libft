/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 19:14:59 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 18:06:21 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

size_t	ft_strlen(const char *str);

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t	n;
	size_t	max;

	max = ft_strlen(s);
	if (!(s))
		return (NULL);
	if (start > max)
		return (NULL);
	n = 0;
	sub = malloc(sizeof(char) * (len + 1));
	if (!(sub))
		return (NULL);
	while ((s[start + n]) && (n < len))
	{
		sub[n] = s[start + n];
		n++;
	}
	while (n < len)
	{
		sub[n] = '\0';
		n++;
	}
	return (sub);
}
