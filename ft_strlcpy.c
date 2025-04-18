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
	size_t	j;
	size_t	k;

	j = 0;
	k = 0;
	while (src[k])
		k++;
	if (size < 1)
		return (size);
	while ((src[j]) && (j + 1 < size))
	{	
		dst[j] = src[j];
		j++;
	}
	dst[j] = '\0';
	return (k);
}
