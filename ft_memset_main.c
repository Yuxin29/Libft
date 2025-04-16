/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:26:42 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/16 19:26:46 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memset - fill memory with a constant byte
SYNOPSIS
       void *memset(void *s, int c, size_t n);
DESCRIPTION
       The  memset()  function  fills the first n bytes of the memory area pointed to by s with the con‐
       stant byte c.
RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s1[100] = " ccccccccccccccc  ";
	char	s2[100] = " ccccccccccccccc  ";
	int	c;
	size_t	n;

	c = 'a';
	n = 8;
	printf("%p\n", s1);
	printf("%p\n", s2);
	
	printf("%p\n", ft_memset(s1, c, n));
	printf("%p\n", memset(s2, c, n));
	return (0);
}
