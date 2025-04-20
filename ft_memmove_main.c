/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:13:16 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 15:21:54 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME
       memmove - copy memory area

SYNOPSIS
       void *memmove(void *dest, const void *src, size_t n);

DESCRIPTION
The memmove function copies n bytes from memory area src to memory area dest.  
The memory areas may overlap: 
         
copying takes place as though the bytes in src are first copied into a 
temporary array that does not overlap src or dest, 
and the bytes are then copied from the temporary array to dest.

RETURN VALUE
       The memmove() function returns a pointer to dest.
*/

#include <string.h>
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{
	char		*dest1;
	char		*dest2;
	char		*src;
	size_t		n;

	dest1 = "1111111";
	src = "abcd";
	n = 3;
	printf("%s\n", dest1);
	ft_memmove(dest1, src, n);
	printf("%s\n", dest1);
	printf("%s\n", dest2);
	memmove(dest2, src, n);
	printf("%s\n", dest2);
	return (0);
}
