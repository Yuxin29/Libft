/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:20:00 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/15 21:24:37 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
     strnstr — locate a substring in a string

LIBRARY
     Utility functions from BSD systems (libbsd, -lbsd)

SYNOPSIS
     char	*strnstr(const char *big, const char *little, size_t len);

DESCRIPTION
     The strnstr() function locates the first occurrence of the null-terminated 
     string little in the string big, 
     where not more than len characters are searched.  
     Characters that appear after a ‘\0’ character are not searched.  
     Since the strnstr() function is a FreeBSD specific API, 
     it should only be used when portability is not a concern.

RETURN VALUES
     If little is an empty string, big is returned; 
     if little occurs nowhere in big, NULL is returned; 
     otherwise a pointer to the first character of the first occurrence 
     of little is returned.
*/

#include "libft.h"

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
// -lbsd when cc

const char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(void)
{
	const char	*big;
	const char	*little;
	size_t		len;

	big = "hellosummerboybabyboybyebye";
	little = "boyba++";
	len = 24;
	printf("%s\n", ft_strnstr(big, little, len));
	printf("%s\n", strnstr(big, little, len));
	return (0);
}
