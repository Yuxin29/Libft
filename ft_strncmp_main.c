/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:27:37 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 15:23:39 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       int strncmp(const char *s1, const char *s2, size_t n);

DESCRIPTION
       The  strcmp()  function compares the two strings s1 and s2.
       The comparison is done using unsigned characters.

       strcmp() returns an integer indicating the result of the comparison:
       • 0, if the s1 and s2 are equal;
       • a negative value if s1 is less than s2;
       • a positive value if s1 is greater than s2.

       The strncmp() function is similar, except it compares  only  the  first
       (at most) n bytes of s1 and s2.

RETURN VALUE
       The strcmp() and strncmp() functions return an integer less than, equal
       to, or greater than zero if s1 (or the first n bytes thereof) is found,
       respectively, to be less than, to match, or be greater than s2.
*/

#include "libft.h"

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	size_t		n;
	const char	*s1;
	const char	*s2;

	s1 = "hellosummer";
	s2 = "aelloseven";
	n = 4;
	printf("%i\n", strncmp(s1, s2, n));
	printf("%i\n", ft_strncmp(s1, s2, n));
	printf("%i\n", strncmp("abc\200", "abc\5", 6));
	printf("%i\n", ft_strncmp("abc\200", "abc\0", 6));
	return (0);
}
