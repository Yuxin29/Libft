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

#include <stddef.h>

const char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s;
	size_t	i;
	int	judge;

	s = 0;
	if (!(*little))
		return (big);
	while ((*big) && (s <= len))
	{
		if (*little == *big)
		{
			i = 0;
			judge = 0;
			while (little[i])
			{
				if (little[i] != big[i])
					judge = 1;
				i++;
			}
			if (judge == 0)
				return (big);
		}
		s++;
		big++;
	}
	return (NULL);
}
