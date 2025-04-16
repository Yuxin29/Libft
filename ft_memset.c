/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:38:58 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/14 18:39:08 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*temp;
	
	i = 0;
	temp = (unsigned char *)s;
	while (i < n)
	{
		temp[i] = c;
		i++;
	}
	return (s);
}
