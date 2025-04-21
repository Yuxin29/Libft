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

/*
size_t is an unsigned integer data type
It’s a type which is used to represent the size of objects in bytes and
it is therefore used as the return type by the sizeof operator. 
*/

#include <string.h>
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(void)
{	
	char	tes1[100] = "abcde";
	char	tes2[100] = "abcde";
	char	tes3[100] = "abcde";
	
	ft_memmove(tes1 + 3, tes1, 4);
	printf("after memmove src1:%s\n", tes1);
	
	ft_memmove(tes2 + 1, tes2, 4);
	printf("after memmove src1:%s\n", tes2);
	
	ft_memmove(tes3 + 5, tes3, 6);
	printf("after memmove src1:%s\n", tes3);
	return (0);
}
