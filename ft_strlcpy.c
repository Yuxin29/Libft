/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:40:45 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/14 18:40:49 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (size < 1)
		return (size);
	while ((src[j]) && (j + 1 < size))
	{	
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + j);
}
