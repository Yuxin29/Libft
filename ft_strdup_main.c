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
       strdup, strndup, strdupa, strndupa - duplicate a string

SYNOPSIS
       char *strdup(const char *s);
       char *strndup(const char *s, size_t n);
       char *strdupa(const char *s);
       char *strndupa(const char *s, size_t n);

DESCRIPTION
       The  strdup() function returns a pointer to a new string which is a du‐
       plicate of the string s.  Memory for the new string  is  obtained  with
       malloc(3), and can be freed with free(3).

       The strndup() function is similar, but copies at most n bytes.  If s is
       longer than n, only n bytes are copied, and  a  terminating  null  byte
       ('\0') is added.

       strdupa() and strndupa() are similar, but use alloca(3) to allocate the
       buffer.  They are available only when using the GNU GCC suite, and suf‐
       fer from the same limitations described in alloca(3).

RETURN VALUE
       On  success,  the strdup() function returns a pointer to the duplicated
       string.  It returns NULL if insufficient memory was available, with er‐
       rno set to indicate the cause of the error.
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s);

int	main(void)
{
	char	*dest1;
	char	*dest2;

	dest1 = ft_strdup("hellosummer");
	dest2 = strdup("hellosummer");
	if (dest1)
		printf("%s\n", dest1);
	free(dest1);
	if (dest2)
		printf("%s\n", dest2);
	free(dest2);
	return (0);
}

/* Attention: to memleak here: Valgrind */
