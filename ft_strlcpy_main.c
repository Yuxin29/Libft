/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:03:17 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/17 13:06:07 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     strlcpy, strlcat — size-bounded string copying and concatenation

DESCRIPTION
     The strlcpy() and strlcat() functions copy and concatenate strings respectively.  
     
     They are designed to be safer, more consistent, and less error prone replacements for strncpy(3) and strncat(3).  
     
     Unlike those functions, strlcpy() and strlcat() take the full size of the buffer (not just the
     length) and guarantee to NUL-terminate the result (as long as size is larger than 0 or, in the case
     of strlcat(), as long as there is at least one byte free in dst).  
     
     Note that a byte for the NUL should be included in size.  
     Also note that strlcpy() and strlcat() only operate on true “C”
     strings.  This means that for strlcpy() src must be NUL-terminated and for strlcat() both src and
     dst must be NUL-terminated.

     The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst,
     NUL-terminating the result.

RETURN VALUES
     The strlcpy() and strlcat() functions return the total length of the string they tried to create.
     
     For strlcpy() that means the length of src.  For strlcat() that means the initial length of dst
     plus the length of src.  While this may seem somewhat confusing, it was done to make truncation de‐
     tection simple
*/

#include <stddef.h>
#include <string.h>
#include <stdio.h>
#include <bsd/string.h>
//(See libbsd(7) for include usage.)  -lbsd

size_t	ft_strlcpy(char *dst, const char *src, size_t size);

int	main(void)
{
	char		dst[] = "aaaaaaaaaaa";
	const char	src[] = "summerhelloo";
	size_t		size = 3;

	printf("%s\n", dst);
	//printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%zu\n", strlcpy(dst, src, size));
	printf("%s\n", dst);
	return (0);
}
