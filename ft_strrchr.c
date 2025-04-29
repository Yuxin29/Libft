/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 11:38:48 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/18 19:04:31 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	cc;

	i = ft_strlen(s) + 1;
	cc = (char ) c;
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)(&s[i]));
		i--;
	}
	return ((void *)0);
}
