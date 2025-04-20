/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:18:22 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/16 18:03:17 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s;
	size_t	i;

	s = 0;
	if (!(*little))
		return (big);
	while ((*big) && (s <= len))
	{
		if (*little == *big)
		{
			i = 0;
			while ((little[i]) && (little[i] == big[i]))
				i++;
			if (!(little[i]))
				return (big);
		}
		s++;
		big++;
	}
	return (NULL);
}
