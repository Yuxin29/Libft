/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 15:27:14 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 15:32:41 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       strdup - duplicate a string

SYNOPSIS
       char *strdup(const char *s);

DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  

       The strndup() function is similar, but copies at most n bytes.  
       If s is longer than n, only n bytes are copied, 
       and a terminating null byte ('\0') is added.

RETURN VALUE
       the strdup() function returns a pointer to the duplicated string.  
       It returns NULL if insufficient memory was available, with errno set 
       to indicate the cause of the error.
*/

#include "libft.h"

#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	char	*dest1;
	char	*dest2;

	dest1 = ft_strdup("hellosummer");
	dest2 = strdup("hellosummer");
	if (dest1)
	{
		printf("%s\n", dest1);
		free(dest1);
	}
	if (dest2)
	{
		printf("%s\n", dest2);
		free(dest2);
	}
	return (0);
}

/* Attention: to memleak here: valgrind --leak-check=full ./a.out  */
