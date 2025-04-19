/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:58:55 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 16:20:12 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib>

void	*calloc(size_t nmemb, size_t size)
{
	size_t	n;
	void	*dest;	

	n = 0;
	dest = NULL;
	while (n < nmemb)
	{
		dest += malloc(size);
		n++;
	}
	return (dest);
}
