/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:07:10 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 21:10:22 by yuwu             ###   ########.fr       */
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

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	dest[100];
	const char	src[100];
	size_t	n;
	char	*test1;
	char	*test2;

	dest = "aaaaa";
	src = "summer";
	n = 3;
	printf("%s\n", dest);
	test1 = ft_memcpy(dest, src, n);
	test2 = memcpy(dest, src, n);
	printf("%s\n", test1);
	printf("%s\n", test2);
	return (0);
}
