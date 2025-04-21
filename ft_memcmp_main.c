/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:44:25 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/21 15:47:41 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME	 memcmp - compare memory areas

DESCRIPTION
       The  memcmp()  function compares the first n bytes (each interpreted as
       unsigned char) of the memory areas s1 and s2.

RETURN VALUE
       The memcmp() function returns  an  integer  less  than,  equal  to,  or
       greater than zero if the first n bytes of s1 is found, respectively, to
       be less than, to match, or be greater than the first n bytes of s2.

       For a nonzero return value, the sign is determined by the sign  of  the
       difference  between  the  first  pair of bytes (interpreted as unsigned
       char) that differ in s1 and s2.

       If n is zero, the return value is zero.
*/

#include "libft.h"

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(void)
{
	const unsigned char	test1[8] = "12345aaa";
	const unsigned char	test2[8] = "12345ddd";

	printf("%i\n", ft_memcmp(test1, test2, 6));
	printf("%i\n", memcmp(test1, test2, 6));
	return (0);
}
