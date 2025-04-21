/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/18 17:35:04 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/18 17:36:48 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
SYNOPSIS
       void *memchr(const void *s, int c, size_t n);

DESCRIPTION
       The  memchr()  function  scans  the  initial n bytes of the memory area
       pointed to by s for the first instance of c.  Both c and the  bytes  of
       the memory area pointed to by s are interpreted as unsigned char.

RETURN VALUE
       The  memchr()  and memrchr() functions return a pointer to the matching
       byte or NULL if the character does not occur in the given memory area.
   
*/

#include "libft.h"

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	const char	test[100] = " f  f ddddf  summer";
	size_t		n;
	char		*test_1;
	char		*test_2;

	n = 10;
	test_1 = ft_memchr(test, 's', n);
	test_2 = memchr(test, 's', n);
	printf("%s\n", (unsigned char *)test_1);
	printf("%s\n", (unsigned char *)test_2);
	return (0);
}
