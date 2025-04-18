/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 19:26:42 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/18 19:25:21 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memset - fill memory with a constant byte
SYNOPSIS
       void *memset(void *s, int c, size_t n);
DESCRIPTION
       The  memset()  function  fills the first n bytes of the memory area 
       pointed to by s with the constant byte c.
RETURN VALUE
       The memset() function returns a pointer to the memory area s.
*/

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n);

int	main(void)
{
	char	s1[100];
	char	s2[100];
	int		c;
	size_t	n;

	s1 = " ccccccccccccccc  ";
	s2 = " ccccccccccccccc  ";
	c = 'a';
	n = 8;
	printf("%s\n", s1);
	printf("%s\n", s2);
	ft_memset(s1, c, n);
	printf("%s\n", s1);
	memset(s2, c, n);
	printf("%s\n", s2);
	return (0);
}
