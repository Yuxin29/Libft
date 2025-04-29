/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuwu <yuwu@student.hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 16:00:04 by yuwu              #+#    #+#             */
/*   Updated: 2025/04/19 16:02:07 by yuwu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
NAME	malloc, free, calloc - allocate and free dynamic memory

SYNOPSIS
       void *calloc(size_t nmemb, size_t size);

DESCRIPTION
The  calloc() function allocates memory for an array of nmemb elements of 
size bytes each and returns a pointer to the allocated memory.  
       
The memory is set to zero.  
       
If nmemb or size is 0, 
then calloc() returns a unique pointer value 
that can be successfully passed to free().
       
If the multiplication of nmemb and size would result in integer overflow, 
then  calloc() returns  an  error.
       
RETURN VALUE
The  malloc and calloc functions return a pointer to the allocated memory, 
which is suitably aligned for any built-in type.  
       
       On error, these functions return NULL.  
       
       NULL may also be returned
       by  a  successful  call to malloc() with a size of zero, 
       or by a successful call to calloc() with nmemb or size equal to zero.
*/

#include "libft.h"

#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(void)
{
	size_t	i;
	int		*tes1;
	int		*tes2;

	i = 0;
	tes1 = calloc(20, sizeof(int));
	tes2 = ft_calloc(18, sizeof(int));
	if ((!tes1) || (!tes2))
		return (0);
	while (i < 20)
	{
		printf("%d", tes1[i]);
		i++;
	}
	free (tes1);
	printf("\n");
	i = 0;
	while (i < 18)
	{
		printf("%d", tes2[i]);
		i++;
	}
	free (tes2);
	return (0);
}
