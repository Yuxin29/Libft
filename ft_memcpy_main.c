/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:07:10 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/18 19:26:11 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memcpy - copy memory area
       
SYNOPSIS
       void *memcpy(void *dest, const void *src, size_t n);
       
DESCRIPTION
The  memcpy() function copies n bytes from memory area src to memory area dest.
The memory areas must not overlap.  
Use memmove(3) if the memory areas do overlap.

RETURN VALUE
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	dest1[9] = "aaaaaaaa";
	char	dest2[9] = "aaaaaaaa";
	char	*src;
	size_t	n;

	src = "summer";
	n = 3;
	printf("%s\n", (unsigned char *)ft_memcpy(dest1, src, n));
	printf("%s\n", (unsigned char *)memcpy(dest2, src, n));
	return (0);
}
