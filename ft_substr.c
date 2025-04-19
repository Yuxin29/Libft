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

char	*ft_strchr(const char *s, unsigned int c)
{
	char	cc;

	cc = (char) c;
	while (*s)
	{
		if (*s == cc)
			return ((char *) &(*s));
		s++;
	}
	if (*s == cc)
		return ((char *) &(*s));
	return ((void *)0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	char			*st;
	unsigned int	n;

	n = 0;
	sub = malloc(sizeof(char) * len);
	if (!(sub))
		return (NULL);
	st = *ft_strchr(s, start);
	while (n < len)
		n++;
	st[n] = '\0';
	return (st);
}
