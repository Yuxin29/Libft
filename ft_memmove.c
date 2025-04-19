/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:40:16 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 15:20:01 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				t;
	unsigned char		*temp;
	const unsigned char	*s;
	unsigned char		*d;

	t = 0;
	temp = NULL;
	s = (unsigned char *)src;
	while (t < n)
	{
		temp[t] = s[t];
		t++;
	}
	d = temp;
	return (dest);
}
