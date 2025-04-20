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

#include <stdlib.h>

void	ft_bzero(void *s, size_t n);

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*dest;
	char	*zero;

	total = nmemb * size;
	if (total == 0)
	{
		zero = malloc(sizeof(*zero));
		*zero = '\0';
		return (zero);
	}
	dest = malloc(total);
	if (!(dest))
		return (NULL);
	ft_bzero(dest, total)
	return (dest);
}

/* 
If the multiplication of nmemb and size would result in integer overflow, 
then  calloc() returns  an  error.
*/
